#include <string>
#include "DebuggingTool.hpp"

using std::string;

string unsignedCharToBinary(const unsigned char& value) {
	string binary;

	for (int i = 0x1 << 7; i > 0; i >>= 1) {
		binary.push_back('0' + ((value & i) != 0));
	}

	return binary;
}

string dataToBinary(const void* value, int numberOfBytes) {
	string binary;

	const unsigned char* pointer = (const unsigned char*)value;
	binary += unsignedCharToBinary(*pointer);
	++pointer;
	--numberOfBytes;
	while (numberOfBytes > 0) {
		binary.push_back(' ');
		binary += unsignedCharToBinary(*pointer);
		++pointer;
		--numberOfBytes;
	}

	return binary;
}
