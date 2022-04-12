// test.cpp
// created and maintained by @cursed-halo
// #include <iostream> // not needed
#include <string> // must include - causes string to skip otherwise
#include "ext_io.h" // include in CURRENT directory

// using std::cout, std::cin, std::string;

// example use cases
int main(void) {
	int n = getInt("Custom Prompts Allowed : ");
	float f = getFloat("Otherwise Default Prompt Is : ");
	char c = getChar("\"Enter Datatype :\"");
	string s = getString();
	bool b = getBool();
	
	cout << "\nPrinting Values\n";
	cout << n << "\n" << f << "\n" << c << "\n" << s << "\n" << b << "\n";
	
	return 0;
}
