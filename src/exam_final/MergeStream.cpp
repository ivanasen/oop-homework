#include "MergeStream.h"

MergeStream::MergeStream(Stream *s1, Stream *s2)
        : _s1(s1->clone()), _s2(s2->clone()), _s1Turn(false) {
}

MergeStream::MergeStream(const MergeStream &m)
        : _s1(m._s1->clone()), _s2(m._s2->clone()), _s1Turn(m._s1Turn) {
}

MergeStream &MergeStream::operator=(const MergeStream &m) {
    if (this != &m) {
        delete _s1;
        delete _s2;

        _s1 = m._s1->clone();
        _s2 = m._s2->clone();
        _s1Turn = m._s1Turn;
    }

    return *this;
}

char MergeStream::get() {
    _s1Turn = !_s1Turn;
    if (_s1Turn) {
        return _s1->get();
    }

    return _s2->get();
}

Stream *MergeStream::clone() {
    return new MergeStream(_s1, _s2);
}

MergeStream::~MergeStream() {
    delete _s1;
    delete _s2;
}
