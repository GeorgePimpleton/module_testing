# C++20/23 Module Testing - Test 4 - separating out functionality into interface and implementation files
[![Language](https://img.shields.io/badge/Language-C%2B%2B%2C%20C%2B%2B20%20%26%20C%2B%2B23-blue)](https://github.com/GeorgePimpleton/modules_testing/)
### Background
C/C++ have changed since 2003/2004.  C++20 introduced a new method for creating custom content, via module interface files instead of headers, etc.  Programmers need to adapt.

### What this does
The custom function is placed in separate interface and implementation files.

FYI, a C++ module implementation file with a .cpp is classified in MSVC as a module internal partition file and has to be manually adjusted in the VS IDE.  That is why I now use the .cppm file extension to designate a module internal partition file.
