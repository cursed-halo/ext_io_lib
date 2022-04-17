// ext_io.h
// created and maintained by @cursed-halo

// required header files
#include <iostream>
#include <string>

using std::cout, std::cin, std::string;

#ifndef ext_io_h
#define ext_io_h

// const vars
const int MAXIMUM = 10000;

// ===================regular input functions====================//

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

	if (int(temp) >= 0 && int(temp) <= 127) {
		return temp;
	} else {
		return 'A'; // default case, may not work
	}
}

// prompt for input, return string
string getString(const string m = "Enter String : ") {
	string temp;

	cout << m;
	cin.clear();			   // clear immediate buffer
	cin.ignore(MAXIMUM, '\n'); // ignore the next MAX characters upto \n
	getline(cin, temp);

	return temp;
}

// prompt for input, return bool
bool getBool(const string m = "Enter Bool : ") {
	bool temp;

	cout << m;
	cin >> temp;

	// testing with if - convert to try catch
	if (temp == 0 || temp == 1) {
		return temp;
	} else {
		return 1; // returns 1 if input is anything other than 0 or 1
	}
}

// ===================array input functions====================//

// prompt for input, return pointer to new <int>heap array
int *getIntArr(int l = 5, const string m = "\nEnter Array Elements\n") {
	if (l <= 0) {
		cout << "\nError : Array Size <= 0\n";
		l = 5; // set length to 5
	}		   // pseudo error handling for length less than or equals to 0

	int *a = new int[l]; // creating array with length l on heap

	cout << m;

	for (int i = 0; i < l; i++) {
		cout << "Element [" << i << "] = ";
		cin >> a[i];
	}

	return a; // return address of first element in array
}

// prompt for input, return pointer to new <float>heap array
float *getFloatArr(int l = 5, const string m = "\nEnter Array Elements\n") {
	if (l <= 0) {
		cout << "\nError : Array Size <= 0\n";
		l = 5; // set length to 5
	}		   // pseudo error handling for length less than or equals to 0

	float *a = new float[l]; // creating array with length l on heap

	cout << m;

	for (int i = 0; i < l; i++) {
		cout << "Element [" << i << "] = ";
		cin >> a[i];
	}

	return a; // return address of first element in array
}

// prompt for input, return pointer to new <char>heap array
char *getCharArr(int l = 5, const string m = "\nEnter Array Elements\n") {
	if (l <= 0) {
		cout << "\nError : Array Size <= 0\n";
		l = 5; // set length to 5
	}		   // pseudo error handling for length less than or equals to 0

	char *a = new char[l]; // creating array with length l on heap

	cout << m;

	for (int i = 0; i < l; i++) {
		cout << "Element [" << i << "] = ";
		cin >> a[i];
	}

	return a; // return address of first element in array
}

// prompt for input, return pointer to new <bool>heap array
bool *getBoolArr(int l = 5, const string m = "\nEnter Array Elements\n") {
	if (l <= 0) {
		cout << "\nError : Array Size <= 0\n";
		l = 5; // set length to 5
	}		   // pseudo error handling for length less than or equals to 0

	bool *a = new bool[l]; // creating array with length l on heap

	cout << m;

	for (int i = 0; i < l; i++) {
		cout << "Element [" << i << "] = ";
		cin >> a[i];
	} // anything but a 0 or a 1 will mess up the whole thing

	return a; // return address of first element in array
}

// ===================regular display functions====================//
// WIP
// ===================array display functions====================//

// display int array of length l
void showIntArr(int *p, int l = 5) {
	int *px = p; // hold address of p

	if (l <= 0) {
		cout << "\nError : Array Size <= 0\n";
		l = 5; // set length to 5
	}		   // pseudo error handling for length less than or equals to 0

	for (int i = 0; i < l; i++) {
		cout << "E[" << i << "] = " << *px << "\tA[" << i << "] = " << px << "\n";
		px++;
	}
}

// display float array of length l
void showFloatArr(float *p, int l = 5) {
	float *px = p; // hold address of p

	if (l <= 0) {
		cout << "\nError : Array Size <= 0\n";
		l = 5; // set length to 5
	}		   // pseudo error handling for length less than or equals to 0

	for (int i = 0; i < l; i++) {
		cout << "E[" << i << "] = " << *px << "\tA[" << i << "] = " << px << "\n";
		px++;
	}
}

// display char array of length l
void showCharArr(char *p, int l = 5) {
	char *px = p; // hold address of p

	if (l <= 0) {
		cout << "\nError : Array Size <= 0\n";
		l = 5; // set length to 5
	}		   // pseudo error handling for length less than or equals to 0

	for (int i = 0; i < l; i++) {
		cout << "E[" << i << "] = " << *px << "\tA[" << i << "] = " << px << "\n";
		px++;
	}
	
	// expected output should have memory for pointer for ith value 
	// instead acting like a stack 
	// showing up as a triangle of inserted chars
	// don't use
}

// display bool array of length l
void showBoolArr(bool *p, int l = 5) {
	bool *px = p; // hold address of p

	if (l <= 0) {
		cout << "\nError : Array Size <= 0\n";
		l = 5; // set length to 5
	}		   // pseudo error handling for length less than or equals to 0

	for (int i = 0; i < l; i++) {
		cout << "E[" << i << "] = " << *px << "\tA[" << i << "] = " << px << "\n";
		px++;
	}
}

// =======================array functions=======================//
// return the sum of all members of int array
long int intSum(int *arrPtr, int len = 5) {
	long int sum = 0; // set sum to 0
	
	for(int i = 0; i < len; i++) {
		sum += arrPtr[i]; // where arrPtr just points to the beginning of
	}					  // some array
	
	return sum;
}

// return the sum of all members of float array
double doubleSum(float *arrPtr, int len = 5) {
	double sum = 0; // set sum to 0
	
	for(int i = 0; i < len; i++) {
		sum += arrPtr[i]; // where arrPtr just points to the beginning of
	}					  // some array
	
	return sum;
}
// end of header

// find if a given character exists in an int array
int findIntArr(int *arrPtr, int val = 0, int len = 5) {
	for(int i = 0; i < len; i++) {
		if(arrPtr[i] == val) {
			cout << "\nSuccess : Match Found\n";
			return i; // if the value exists returns the location (unique)
			break;
		} else {
			cout << "\nFailure : No Match Found\n"l
		}
	}
}

#endif
