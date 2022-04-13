# ext_io_lib - The C++ Library Extension - WIP - Inspired By CS50.h
**C++ library that seeks to add basic I/O features**

---

## Planned Features
- [X] `getIntArr();` : Get int array
- [ ] `getFloatArr();` : Get float array
- [ ] `getCharArr();` : Get char array
- [X] `showIntArr();` : Display any argument with formatting
- [ ] `showCharArr();` : Display any argument with formatting
- [ ] `showFloatArr();` : Display any argument with formatting

---

## Current Features
- Get Integer : `getInt("Prompt Goes Here");`
- Get Float   : `getFloat("Prompt Goes Here");`
- Get Char    : `getChar("Prompt Goes Here");`
- Get String  : `getString("Prompt Goes Here");`
- Get Bool    : `getBool("Prompt Goes Here");`
- Get Int Array : `getIntArr(size, "Prompt Goes Here");`
- Display Int Array : `showIntArr(arr_ptr, size);`

---

## How To Use 
- Download ext_io.h
- Place it on the directory of your project
- Include ext_io.h

---

## Sample Use Cases
Check the test.cpp file for implementation details

---

## Known Bugs
- Input buffer might break things, specially `getString();`
- Exception handling not implemented yet
- Out of bound values might cause stack overflows

---