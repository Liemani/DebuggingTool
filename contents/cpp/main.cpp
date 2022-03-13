#include <iostream>
#include "DebuggingTool.hpp"

using std::cout;
using std::endl;

using std::string;

int main(void) {
	int temp = 4;
	float temp2 = 4.2;

	cout << unsignedCharToBinary('b') << endl;
	cout << dataToBinary(&temp, 4) << endl;
	cout << dataToBinary(&temp2, 4) << endl;

	return 0;
}
