#pragma once

#include <cstddef>
#include <iostream>
#include "Song.hh"

class Album {
private:
    Song **songs;
    size_t size;
    char *name;

    void copy(const Album &album);

    void deleteSong(size_t index);

public:
    Album();

    Album(Song **songs, size_t size, char *name);

    Album(const Album &album);

    Album &operator=(const Album &album);

    ~Album();

    friend std::ostream &operator<<(std::ostream &stream, const Album &album);

    long getLength() const;

    char *getArtist() const;

    Song *findSong(const char *name) const;

    void deleteDuplicates();

    void detectCovers();
};



