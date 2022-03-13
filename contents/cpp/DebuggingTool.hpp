#ifndef DEBUGGINGTOOL_HPP
#define DEBUGGINGTOOL_HPP

#include <string>

std::string unsignedCharToBinary(const unsigned char& value);
std::string dataToBinary(const void* value, int numberOfBytes);

#endif
