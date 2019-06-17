#include <utility>

#include "Directory.h"

void Directory::contents(std::ostream &out) const {
    for (const File *file : _contents) {
        file->contents(out);
    }
}

Directory::Directory(const std::string &name, const std::string &owner, std::vector<File *> contents)
        : File(name, owner), _contents(std::move(contents)) {
}
