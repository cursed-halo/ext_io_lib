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
const int ERR_INVALID_IP = 1; // for invalid input

// ===================regular input functions====================//

// prompt for input, return int
int getInt(const string m = "Enter Int : ") {
	int temp = 0; // default value

	cout << m;
	try {
		cin >> temp;
		if(!cin) {
			throw ERR_INVALID_IP; // error code = 1 for primitive invalid I/P
		} else {
			return temp;
		}
	}
	catch(int ERR_INVALID_IP) {
		cout << "\nERROR : " << ERR_INVALID_IP << "\n";
	}
	
	return temp; // returns a default value in case something went wrong
}

// prompt for input, return float
float getFloat(const string m = "Enter Float : ") {
	float temp = 0.0; // default value
	
	cout << m;
	try {
		cin >> temp;
		if(!cin) {
			throw ERR_INVALID_IP; // error code = 1 for primitive invalid I/P
		} else {
			return temp;
		}
	}
	catch(int ERR_INVALID_IP) {
		cout << "\nERROR : " << ERR_INVALID_IP << "\n";
	}
	
	return temp; // returns a default value in case something went wrong
}

// prompt for input, return char
char getChar(const string m = "Enter Char : ") {
	char temp = ' '; // default value

	cout << m;
	try {
		cin >> temp;
		if(!cin) {
			throw ERR_INVALID_IP; // error code = 1 for primitive invalid I/P
		} else {
			return temp;
		}
	}
	catch(int ERR_INVALID_IP) {
		cout << "\nERROR : " << ERR_INVALID_IP << "\n";
	}
	
	return temp; // returns a default value in case something went wrong
}

// prompt for input, return string
string getString(const string m = "Enter String : ") {
	string temp = " "; // default value

	cout << m;
	cin.clear();			   // clear immediate buffer
	cin.ignore(MAXIMUM, '\n'); // ignore the next MAX characters upto \n
	try {
		getline(cin, temp);
		if (!cin) {
			throw ERR_INVALID_IP;
		} else {
			return temp;
		}
	}
	catch(int ERR_INVALID_IP) {
		cout << "\nERROR : " << ERR_INVALID_IP << "\n";
	}
	
	return temp; // returns a default value in case something went wrong
}

// prompt for input, return bool
bool getBool(const string m = "Enter Bool : ") {
	bool temp = 0; // default value

	cout << m;
	try {
		cin >> temp;
		if (!cin) {
			throw ERR_INVALID_IP;
		} else {
			return temp;
		}
	}
	catch(int ERR_INVALID_IP) {
		cout << "\nERROR : " << ERR_INVALID_IP << "\n";
	}
	
	return temp; // returns a default value in case something went wrong
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

// find if a given int value exists in an UNIQUE int array, returns 1 or 0
bool intExists(int *arrPtr, int val = 0, int len = 5) {
	bool found = 0; // false by default
	
	for(int i = 0; i < len; i++) {
		if(arrPtr[i] == val) {
			found = 1; // set flag to 1
			break;
		} 
	}
	
	if(found == 1) {
		return found;
	} else {
		return found;
	}
	
	return 0;
}

// find if a given float value exists in an UNIQUE float array, returns 1 or 0
bool floatExists(float *arrPtr, float val = 0, int len = 5) {
	bool found = 0; // false by default
	
	for(int i = 0; i < len; i++) {
		if(arrPtr[i] == val) {
			found = 1; // set flag to 1
			break;
		} 
	}
	
	if(found == 1) {
		return found;
	} else {
		return found;
	}
	
	return 0;
}

// find if a given float value exists in an UNIQUE float array, returns 1 or 0
bool charExists(char *arrPtr, char val = 'a', int len = 5) {
	bool found = 0; // false by default
	
	for(int i = 0; i < len; i++) {
		if(arrPtr[i] == val) {
			found = 1; // set flag to 1
			break;
		} 
	}
	
	if(found == 1) {
		return found;
	} else {
		return found;
	}
	
	return 0;
}

// Array count functions - Overloaded

// count elements in an array <int>
int count(int *arrPtr, int len){
	int count = 0; // set to 0
	
	for(int i = 0; i < len; i++) {
		count++;
	}
	
	return count;
}

// count elements in an array <float>
int count(float *arrPtr, int len){
	int count = 0; // set to 0
	
	for(int i = 0; i < len; i++) {
		count++;
	}
	
	return count;
}

// count elements in an array <char>
int count(char *arrPtr, int len){
	int count = 0; // set to 0
	
	for(int i = 0; i < len; i++) {
		count++;
	}
	
	return count;
}

// count elements in an array <bool>
int count(bool *arrPtr, int len){
	int count = 0; // set to 0
	
	for(int i = 0; i < len; i++) {
		count++;
	}
	
	return count;
}

#endif
