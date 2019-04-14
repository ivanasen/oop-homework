/////////////////////////////////////////////////////////////
//
// Author: Иван-Асен Веселинов Чакъров
// FN: 81837
// Date: 27.03.2019
//

#include <cstddef>
#include <cstring>
#include <stdexcept>

///
/// Да се реализира клас Song, съхраняващ следната информация за песен:
/// - Заглавие: символен низ с дължина до 100 символа
/// - Име на изпълнител: символен низ с дължина до 100 символа
/// - Продължителност в секунди
///
class Song {
    // моля, попълнете реализацията на класа тук

public:
    // За класа да се реализират:
    // подходящи конструктори, например:

    // конструктор по подразбиране
    Song() : _title(new char[1]()), _artist(new char[1]()), _length(0) {
    }

    // конструктор с параметри
    Song(char const *title, char const *artist, int length) {
        setTitle(title);
        setArtist(artist);
        setLength(length);
    }

    // Ако е необходимо: деструктор, конструктор за копиране, оператор за присвояване
    Song(const Song &song) {
        copy(song);
    }

    Song &operator=(const Song &song) {
        if (this != &song) {
            delete[] _title;
            delete[] _artist;
            copy(song);
        }
        return *this;
    }

    ~Song() {
        delete[] _title;
        delete[] _artist;
    }

    // Методи за достъп до атрибутите
    char const *getTitle() const {
        return _title;
    }

    char const *getArtist() const {
        return _artist;
    }

    int getLength() const {
        return _length;
    }

    // Други помощни методи, ако е необходимо
private:
    static const size_t MAX_TITLE_LENGTH = 100;
    static const size_t MAX_ARTIST_LENGTH = 100;

    char *_title;
    char *_artist;
    int _length;

    void copy(const Song &song) {
        setTitle(song.getTitle());
        setArtist(song.getArtist());
        setLength(song.getLength());
    }

    void setTitle(const char *title) {
        size_t newTitleLen = strlen(title);
        if (strlen(title) > MAX_TITLE_LENGTH) {
            throw std::invalid_argument("Song title is too long");
        }

        _title = new char[newTitleLen + 1];
        strcpy(_title, title);
    }

    void setArtist(const char *artist) {
        size_t newArtistLen = strlen(artist);
        if (strlen(artist) > MAX_ARTIST_LENGTH) {
            throw std::invalid_argument("Song title is too long");
        }

        _artist = new char[newArtistLen + 1];
        strcpy(_artist, artist);
    }

    void setLength(int length) {
        if (length <= 0) {
            throw std::invalid_argument("Song length should be positive");
        }

        _length = length;
    }
};

///
/// Да се реализира клас Playlist, който описва списък за слушане на музика, представен чрез списък от песни,
/// чиито максимален брой се задава при конструиране на списъка.
///

class Playlist {
    // моля, попълнете реализацията на класа тук

public:
    // За класа да се реализират:
    // Конструктор с един параметър, задаващ максималния брой N на песни, които ще бъдат съхранявани в списъка
    Playlist(unsigned N) : _songs(new Song[N]), _size(0), _capacity(N) {
    }

    // Ако е необходимо: деструктор, конструктор за копиране, оператор за присвояване
    Playlist(const Playlist &playlist) {
        copy(playlist);
    }

    Playlist &operator=(const Playlist &playlist) {
        if (this != &playlist) {
            delete[] _songs;
            copy(playlist);
        }

        return *this;
    }

    ~Playlist() {
        delete[] _songs;
    }

    // Метод addSong за добавяне на песен към списъка (ако вече има песен със същото заглавие и същия изпълнител,
    // да не се добавя нова песен)
    void addSong(Song const &song) {
        if (contains(song)) {
            return;
        }
        resizeIfNeeded();
        _songs[_size++] = song;
    }

    // Метод totalLength, който изчислява и връща общата продължителност на всички песни в списъка
    int totalLength() const {
        int total = 0;
        for (size_t i = 0; i < _size; i++) {
            total += _songs[i].getLength();
        }
        return total;
    }

    // Метод longestSong, който връща най-дългата песен (ако има две или повече най-дълги песни, да се върне
    // някоя от тях, без значение коя)
    Song longestSong() const {
        size_t longestIndex = 0;
        for (size_t i = 0; i < _size; i++) {
            if (_songs[i].getLength() > _songs[longestIndex].getLength()) {
                longestIndex = i;
            }
        }
        return _songs[longestIndex];
    }

private:
    Song *_songs;
    size_t _size;
    size_t _capacity;

    static const int RESIZE_MULTIPLIER = 2;

    void copy(const Playlist &playlist) {
        _size = playlist._size;
        _capacity = playlist._capacity;
        _songs = new Song[_capacity];

        for (size_t i = 0; i < _size; i++) {
            _songs[i] = playlist._songs[i];
        }
    }

    void resizeIfNeeded() {
        if (_size < _capacity) {
            return;
        }

        _capacity *= RESIZE_MULTIPLIER;
        Song *newSongs = new Song[_capacity];

        for (size_t i = 0; i < _size; i++) {
            newSongs[i] = _songs[i];
        }

        delete[] _songs;
        _songs = newSongs;
    }

    bool contains(const Song &song) const {
        for (size_t i = 0; i < _size; i++) {
            Song currentSong = _songs[i];
            if ((strcmp(currentSong.getTitle(), song.getTitle()) == 0) &&
                (strcmp(currentSong.getArtist(), song.getArtist()) == 0)) {
                return true;
            }
        }

        return false;
    }
};

///

#define DOCTEST_CONFIG_IMPLEMENT

#include "doctest.h"

//-------------------------------------------------------------------------
//
// ВАЖНО: Преди предаване на решението, моля премахнете коментара от дадения по-долу ред,
//        за да активирате автоматичните тестове за решението си.
//
//-------------------------------------------------------------------------
#include "var2-tests.h"

int main() {

    //-------------------------------------------------------------------------
    //
    // ВАЖНО: При предаване на работата във тялото на функцията main не трябва да се
    //        изпълнява нищо друго освен долния ред.
    //
    //-------------------------------------------------------------------------
    doctest::Context().run();

    return 0;
}
