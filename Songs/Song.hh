#pragma once

#include <iostream>

class Song {
private:
    static const int MAX_TITLE_LENGTH = 100;
    static const int MAX_PERFORMER_LENGTH = 100;

    char *title;
    char *performer;
    int year;
    long length;
    Song *original;

    void copy(const Song &source);

public:

    Song();

    Song(char *title, char *performer, int year, long length, Song *original);

    Song(const Song &source);

    Song &operator=(const Song &source);

    char *getTitle() const;

    void setTitle(char *title);

    char *getPerformer() const;

    void setPerformer(char *performer);

    int getYear() const;

    void setYear(int year);

    long getLength() const;

    void setLength(long length);

    Song *getOriginal() const;

    void setOriginal(Song *original);

    friend std::ostream &operator<<(std::ostream &stream, const Song &song);

    virtual ~Song();

    bool equals(const Song &other) const;

    bool operator==(const Song &other) const;
};



