# C++20/23 Module Testing
[![Language](https://img.shields.io/badge/Language-C%2B%2B%2C%20C%2B%2B20%20%26%20C%2B%2B23-blue)](https://github.com/GeorgePimpleton/modules_testing/)
### Background
C/C++ have changed since 2003/2004.  C++20 introduced a new method for creating custom content, via module interface files instead of headers, etc.  Programmers need to adapt.

### Why this github repository exists
Because using modules can be fraught with frusttration if not properly set up.  Header use and the potential drawbacks have been known for years.  Modules were created to remove the problems with headers, though creating other problems if not properly used.

### Compiler used
I use Visual Studio 2022 (Community) to create and test the code, setting the C++ language standard to /std:c++latest (C++23 features).  This works even for pre-C++20 code.

You should think about using VS 2022 as well.  It's free for the Community edition.

[Visual Studio 2022 Community download](https://visualstudio.microsoft.com/vs/community/)

### Layout of test examples
Each test has 3 code examples, 1st is pre-C++20 code, 2nd is C++20 code and the 3rd is C++23 code.  The examples will progress into more complex usages of header use/module consumption to make understanding module use less painful.

I learned the hard way the way modules need to be set up and used.  That doesn't mean I know all there is to know about modules.

### Notes
There may be links to websites or internet sources in these pages and source code. Links can go stale. A search engine is your friend.

This is a "work in progress", there is no guarantee this will be nothing more than a repo dump of test snippets.  There is also no guarantee the source files will work for you.  Especially if you don't use Visual Studio as your compiler.  At this time only VS is 100% compliant for C++20.  No compiler is complete C++23 compliant.

If you find better ways to rework the code don't hesitate to let me know.
