#include <ostream>
#include "TextFile.h"

void TextFile::contents(std::ostream &out) const {
    out << _contents << std::endl;
    out << "Characters count: " << _contents.size() << std::endl;
}
