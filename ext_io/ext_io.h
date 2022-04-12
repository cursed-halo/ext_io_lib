// ext_io.h
// created and maintained by @cursed-halo

// required header files
#include <iostream>
#include <string>

using std::cout, std::cin, std::string;

#ifndef ext_io_h
#define ext_io_h

// functions to simplify user input

// prompt for input, return int
int getInt(const string m = "Enter Int : ") {
	int temp;
	
	cout << m;
	cin >> temp;
	
	return temp;
}

// prompt for input, return float
float getFloat(const string m = "Enter Float : ") {
	float temp;
	
	cout << m;
	cin >> temp;
	
	return temp;
}

// prompt for input, return char
char getChar(const string m = "Enter Char : ") {
	char temp;
	
	cout << m;
	cin >> temp;
	
	return temp;
}

// prompt for input, return string
string getString(const string m = "Enter String : ") {
	string temp;
	
	cout << m;
	cin.clear();
	getline(cin, temp);
	
	return temp;
}

// prompt for input, return bool
bool getBool(const string m = "Enter Bool : ") {
	bool temp;
	
	cout << m;
	cin >> temp;
	
	// testing with if - convert to try catch
	if(temp == 0 || temp == 1){
		return temp;
	} else {
		return 1; // returns 1 if input is anything other than 0 or 1
	}
}

// end of header

#endif
