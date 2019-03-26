#include <iostream>
#include "Song.hh"
#include "Album.hh"

void testAlbums() {
    Song *s1 = new Song(const_cast<char *>("Pesho"), const_cast<char *>("Gsoho"), 2323, 23124324, nullptr);
    Song *s2 = new Song(const_cast<char *>("Pesho"), const_cast<char *>("Gsoho"), 2323, 23124324, nullptr);

    Song **songs = new Song *[2]{s1, s2};

    auto *album = new Album(songs, 2, const_cast<char *>("Kiro"));

    std::cout << album->getLength() << ' ' << album->getArtist();

    album->deleteDuplicates();
    album->detectCovers();
}

int main() {
    testAlbums();
    return 0;
}