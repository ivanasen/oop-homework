#include <cstring>
#include "Album.hh"

Album::Album() : songs(nullptr), size(0), name(nullptr) {}

Album::Album(Song **songs, size_t size, char *name) : songs(songs), size(size), name(name) {}

Album::Album(const Album &album) {
    copy(album);
}

Album &Album::operator=(const Album &album) {
    copy(album);
    return *this;
}

void Album::copy(const Album &album) {
    delete[] songs;
    delete[] name;

    size = album.size;
    name = new char[strlen(album.name) + 1];
    strcpy(name, album.name);

    songs = new Song *[album.size];
    for (size_t i = 0; i < size; i++) {
        songs[i] = album.songs[i];
    }
}

Album::~Album() {
    delete[] songs;
    delete[] name;
}

std::ostream &operator<<(std::ostream &stream, const Album &album) {
    stream << "Album name: " << album.name << ", Songs count: " << album.size;
    return stream;
}

long Album::getLength() const {
    long length = 0;
    for (size_t i = 0; i < size; i++) {
        length += songs[i]->getLength();
    }
    return length;
}

char *Album::getArtist() const {
    if (size <= 0) {
        throw std::invalid_argument("Trying to get artist of an empty album");
    }

    char *artist = songs[0]->getPerformer();
    for (size_t i = 1; i < size; i++) {
        if (strcmp(artist, songs[i]->getPerformer()) != 0) {
            return const_cast<char *>("Various Artists");
        }
    }
    return artist;
}

Song *Album::findSong(const char *name) const {
    for (size_t i = 0; i < size; i++) {
        if (strcmp(name, songs[i]->getPerformer()) == 0) {
            return songs[i];
        }
    }

    return nullptr;
}

void Album::deleteDuplicates() {
    for (size_t i = 0; i < size; i++) {
        for (size_t j = i + 1; j < size; j++) {
            if (songs[i] == songs[j]) {
                deleteSong(j);
            }
        }
    }
}

void Album::detectCovers() {
    for (size_t i = 0; i < size; i++) {
        if (songs[i]->getOriginal() != nullptr) {
            songs[i] = songs[i]->getOriginal();
        }
    }
}

void Album::deleteSong(size_t index) {
    if (index >= size) {
        return;
    }

    delete (songs + index);

    for (size_t i = index + 1; i < size; i++) {
        songs[i - 1] = songs[i];
    }

    size--;
}
