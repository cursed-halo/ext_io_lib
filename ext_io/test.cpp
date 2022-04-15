// test.cpp
// created and maintained by @cursed-halo
// #include <iostream> // not needed
#include <string>	// for strings inside prompts
#include "ext_io.h" // include in CURRENT directory

// using std::cout, std::cin, std::string;

// example use cases
int main(void) {
	// for regular input types

	int n = getInt("Custom Prompts Allowed : ");
	float f = getFloat("Otherwise Default Prompt Is : ");
	char c = getChar("\"Enter Datatype :\"");
	string s = getString();
	bool b = getBool();

	cout << "\nPrinting Values\n";
	cout << n << "\n"
		 << f << "\n"
		 << c << "\n"
		 << s << "\n"
		 << b << "\n";

	// for array related functions

	int *p = getIntArr(2);
	showIntArr(p, 2);

	float *f = getFloatArr(2);
	showFloatArr(f, 2);

	return 0;
}
