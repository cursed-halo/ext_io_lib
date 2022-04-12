// ext_io.h
// created and maintained by @cursed-halo

// required header files
#include <iostream>
#include <string>

using std::cout, std::cin, std::string;

#ifndef ext_io_h
#define ext_io_h

// functions to simplify user input

int getInt(const string m) {
	int temp;
	
	cout << m;
	cin >> temp;
	
	return temp;
}

float getFloat(const string m) {
	float temp;
	
	cout << m;
	cin >> temp;
	
	return temp;
}

char getChar(const string m) {
	char temp;
	
	cout << m;
	cin >> temp;
	
	return temp;
}

string getString(const string m) {
	string temp;
	
	cout << m;
	cin.clear();
	getline(cin, temp);
	
	return temp;
}

// end of header

#endif
