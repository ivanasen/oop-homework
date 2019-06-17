#pragma once


#include "File.h"
#include <string>

class TextFile : public File {
public:
    void contents(std::ostream &out) const override;

private:
    std::string _contents;
};


