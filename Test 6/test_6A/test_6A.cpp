// test_6A.cpp : using a header file for custom functionality

// the <iostream> and <string> headers are implicitly chained in
// with this #include
#include "my_stuff_6A.hpp"

int main( )
{
   my_func( );

   std::cout << test << '\n';

   std::string str { "Test String" };

   std::cout << str << '\n';
}
