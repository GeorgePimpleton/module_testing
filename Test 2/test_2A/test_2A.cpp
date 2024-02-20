// pre-C++20 formatted output using the C library
#include <cstdio>  // for printf

int main( )
{
   ::printf( "Hello World!\n" );

   int i = 42;

   ::printf( "The answer to life, the universe, and everything is %i\n", i );
}