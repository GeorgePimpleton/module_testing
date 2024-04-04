# C++20/23 Module Testing: Test 6 - modules are NOT headers!
[![Language](https://img.shields.io/badge/Language-C%2B%2B%2C%20C%2B%2B20%20%26%20C%2B%2B23-blue)](https://github.com/GeorgePimpleton/modules_testing/)

### Background
C/C++ have changed since 2003/2004.  C++20 introduced a new method for creating custom content, via module interface files instead of headers, etc.  Programmers need to adapt.

### What this does
One of the hardest things to learn and remember is ***modules are not headers, imports are not #includes!!!!!!!!***  With modules there is no implicit chaining of modules as happens with headers.

There is at least one exception that I know of with VS, no need to import <string>; to use the string stdlib library.  Go figure.  \*shrug\*