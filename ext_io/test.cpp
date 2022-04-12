// test.cpp
// created and maintained by @cursed-halo
#include <iostream>
#include <string>
#include "ext_io.h"

using std::cout, std::cin, std::string;

int main(void) {
	
	int n = getInt("Enter Int : ");
	float f = getFloat("Enter Float : ");
	char c = getChar("Enter Char : ");
	string s = getString();
	bool b = getBool();
	
	cout << "\nPrinting Values\n";
	cout << n << "\n" << f << "\n" << c << "\n" << s << "\n" << b << "\n";
	
}
