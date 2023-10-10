#include "Exception.h"

Exception::Exception(const char* message) { std::strcpy(m_message, message); }

const char* Exception::GetMessage() const { return m_message; }
