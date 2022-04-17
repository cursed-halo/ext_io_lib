// test.cpp
// created and maintained by @cursed-halo
// #include <iostream> // not needed
#include <string>	// for strings inside prompts
#include "ext_io.h" // include in CURRENT directory

// using std::cout, std::cin, std::string;
// example use cases
int main(void) {
	// uncomment the applicable use case to test 
	
	// basic input types, returns the value(s)

	// int n = getInt();
	// float f = getFloat();
	// char c = getChar();
	// string s = getString();
	// bool b = getBool();

	// print the basic input types just to test
	/*
	cout << "\nPrinting Values\n";
	cout << n << "\n"
		 << f << "\n"
		 << c << "\n"
		 << s << "\n"
		 << b << "\n";
	*/
	
	// for array related functions
	// must declare a relevant pointer for this to work, like below
	
	// int array, returns pointer to first memory addr of heap
	// int *ii = getIntArr(2);
	// showIntArr(ii, 2);
	// int n = findIntArr(ii, 2, 2);
	// cout << "Found at : " << n;

	// float array, returns pointer to first memory addr of heap
	// float *ff = getFloatArr(2);
	// showFloatArr(ff, 2);
	// float n = findFloatArr(ff, 22.212, 2);
	// cout << "Found at : " << n;
	
	// char array, returns pointer to first memory addr of heap
	// char *cc = getCharArr(2);
	// showCharArr(cc, 2); // this gives unexpected results

	// bool array, returns pointer to first memory addr of heap
	// bool *bb = getBoolArr(2);
	// showBoolArr(bb, 2);
	
	// array function example
	
	// int sum = 0;
	// int lenArr = 5; // fixed length
	// int *n = getIntArr(lenArr, "\nEnter Values : ");

	// cout << "Sum = " << intSum(n, lenArr) << "\n";
	
	return 0;
}
