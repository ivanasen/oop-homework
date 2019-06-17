#pragma once


#include "File.h"
#include <vector>

class Directory : public File {
public:
    explicit Directory(const std::string &name, const std::string &owner, std::vector<File *> contents);

    void contents(std::ostream &out) const override;

private:
    std::vector<File *> _contents;
};


