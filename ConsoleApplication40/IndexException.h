#pragma once
#include "Exception.h"
class IndexException : public Exception {
public:
    IndexException(const char* message);
    virtual const char* GetMessage() const;
};
