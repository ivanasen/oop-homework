#include <cstring>
#include <stdexcept>
#include <iostream>
#include "Song.hh"

Song::Song(char *title, char *performer, int year, long length, Song *original) :
        year(year), length(length),
        original(original) {
    setTitle(title);
    setPerformer(performer);
}

Song::Song() : title(nullptr), performer(nullptr), year(0), length(0), original(nullptr) {}

Song::Song(const Song &source) {
    copy(source);
}

Song &Song::operator=(const Song &source) {
    copy(source);
    return *this;
}

char *Song::getTitle() const {
    return title;
}

void Song::setTitle(char *title) {
    if (strlen(title) > MAX_TITLE_LENGTH) {
        throw std::invalid_argument(
                "Song title shouldn't be longer than " + std::to_string(MAX_TITLE_LENGTH) + " chars.");
    }

    Song::title = title;
}

char *Song::getPerformer() const {
    return performer;
}

void Song::setPerformer(char *performer) {
    if (strlen(performer) > MAX_TITLE_LENGTH) {
        throw std::invalid_argument(
                "Performer name shouldn't be longer than " + std::to_string(MAX_TITLE_LENGTH) + " chars.");
    }

    Song::performer = performer;
}

int Song::getYear() const {
    return year;
}

void Song::setYear(int year) {
    Song::year = year;
}

long Song::getLength() const {
    return length;
}

void Song::setLength(long length) {
    Song::length = length;
}

Song *Song::getOriginal() const {
    return original;
}

void Song::setOriginal(Song *original) {
    Song::original = original;
}

void Song::copy(const Song &source) {
    delete[] title;
    delete[] performer;

    original = source.original;
    title = new char[strlen(source.getTitle()) + 1];
    performer = new char[strlen(source.getPerformer()) + 1];

    strcpy(title, source.getTitle());
    strcpy(performer, source.getPerformer());
}

std::ostream &operator<<(std::ostream &stream, const Song &song) {
    stream << "Title: " << song.getTitle() << ", Performer: " << song.getPerformer() << ", Year: " << song.getYear()
           << ", Length: " << song.getLength();
    return stream;
}

Song::~Song() {
    delete[] title;
    delete[] performer;
}

bool Song::equals(const Song &other) const {
    return strcmp(title, other.getTitle()) == 0 &&
           strcmp(performer, other.getPerformer()) == 0 &&
           year == other.getYear() &&
           length == other.getLength();
}

bool Song::operator==(const Song &other) const {
    return equals(other);
}
