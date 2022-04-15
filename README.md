# ext_io_lib - The C++ Library Extension - WIP - Inspired By CS50.h - *CURRENT RELEASE OUT OF DATE*
**C++ library that seeks to add basic I/O features**



## Planned Features
### Implemented Already
- [X] `getIntArr();` : Get int array
- [X] `getFloatArr();` : Get float array
- [X] `getCharArr();` : Get char array *NEEDS FIXING*
- [X] `showIntArr();` : Display any argument with formatting *BAREBONES FOR NOW*
- [X] `showCharArr();` : Display any argument with formatting *BAREBONES FOR NOW* 
- [X] `showFloatArr();` : Display any argument with formatting *BAREBONES FOR NOW*
### Planned Features | WIP
- [ ] : Proper display functionality for each of the primitives and arrays with more formatting
- [ ] : Fix buffer related issues resulting in various bugs for incorrect inputs
- [ ] : Implement proper error handling
- [ ] : Write errors to a proper error log file
- [ ] : Update the release
- [ ] : Implement a bashscript for each install



## Current Features
### Basic Input Functionality
- Get Integer : `getInt("Prompt Goes Here");`
- Get Float   : `getFloat("Prompt Goes Here");`
- Get Char    : `getChar("Prompt Goes Here");`
- Get String  : `getString("Prompt Goes Here");`
- Get Bool    : `getBool("Prompt Goes Here");`

  ### Array Input Functionality
- Get Int Array : `getIntArr(size, "Prompt Goes Here");`
- Get Float Array : `getFloatArr(size, "Prompt Goes Here");`
- Get Char Array : `getCharArr(size, "Prompt Goes Here");`
- Get Bool Array : `getBoolArr(size, "Prompt Goes Here");`


### Array Display Functionality : *WIP*
- Display Int Array : `showIntArr(arr_ptr, size);`
- Display Float Array : `showFloatArr(arr_ptr, size);`
- Display Char Array : `showCharArr(arr_ptr, size);`
- Display Bool Array : `showBoolArr(arr_ptr, size);`


## How To Use 
- Download ext_io.h
- Place it on the directory of your project
- Include ext_io.h


## Sample Use Cases
Check the test.cpp file for implementation details


## Known Bugs
- Input buffer might break things, specially `getString();`
- Exception handling not implemented yet
- Out of bound values might cause stack overflows
- `showCharArr();` has problems printing the memory location 
- `showXArr();` is just a demo function for now, and causes several issues with formatting
- `getBoolArr();` has a hard time with any non `true` or `false` inputs and gives unexpected results 

---