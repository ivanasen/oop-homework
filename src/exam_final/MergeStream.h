#pragma once

#include "Stream.h"

class MergeStream : public Stream {
public:
    MergeStream(Stream *s1, Stream *s2);

    MergeStream(const MergeStream &m);

    MergeStream &operator=(const MergeStream &m);

    char get() override;

    Stream *clone() override;

    ~MergeStream() override;

private:
    Stream *_s1;
    Stream *_s2;

    bool _s1Turn;
};


