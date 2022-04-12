# ext_io_lib - The C++ Library Extension - WIP - Inspired By CS50.h
**C++ library that seeks to add basic I/O features**

---

## Planned Features
- [ ] `getIntArr();` : get int array
- [ ] `getFloatArr();` : Get float array
- [ ] `getCharArr();` : Get char array
- [ ] `disp();` : Display any argument with formatting

---

## Current Features
- Get Integer : `getInt("Prompt Goes Here");`
- Get Float   : `getFloat("Prompt Goes Here");`
- Get Char    : `getChar("Prompt Goes Here");`
- Get String  : `getString("Prompt Goes Here");`
- Get Bool    : `getBool("Prompt Goes Here");`

---

## How To Use 
- Download ext_io.h
- Place it on the directory of your project
- Include ext_io.h

---

## Sample Use Cases
May be found inside the test.cpp file included with the header file.

---

## Known Bugs
- Input buffer might break things, specially `getString();`
- Exception handling not implemented yet
- Out of bound values might cause stack overflows

---