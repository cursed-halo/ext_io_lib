# ext_io_lib - The C++ Library Extension - WIP - Inspired By CS50.h - *CURRENT RELEASE OUT OF DATE*
**C++ library that seeks to add basic I/O features**



## Planned Features
- [X] `getIntArr();` : Get int array
- [X] `getFloatArr();` : Get float array
- [X] `getCharArr();` : Get char array *NEEDS FIXING*
- [X] `showIntArr();` : Display any argument with formatting *BAREBONES FOR NOW*
- [X] `showCharArr();` : Display any argument with formatting *BAREBONES FOR NOW* 
- [X] `showFloatArr();` : Display any argument with formatting *BAREBONES FOR NOW*



## Current Features
- Get Integer : `getInt("Prompt Goes Here");`
- Get Float   : `getFloat("Prompt Goes Here");`
- Get Char    : `getChar("Prompt Goes Here");`
- Get String  : `getString("Prompt Goes Here");`
- Get Bool    : `getBool("Prompt Goes Here");`
- Get Int Array : `getIntArr(size, "Prompt Goes Here");`
- Display Int Array : `showIntArr(arr_ptr, size);`
- Get Float Array : `getFloatArr(size, "Prompt Goes Here");`
- Display Float Array : `showFloatArr(arr_ptr, size);`
- Get Char Array : `getCharArr(size, "Prompt Goes Here");`
- Display Char Array : `showCharArr(arr_ptr, size);`
- Get Bool Array : `getBoolArr(size, "Prompt Goes Here");`
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

