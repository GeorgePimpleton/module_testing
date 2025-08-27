// test_6C.cpp : formatting output

import std;

int main( )
{
   std::print( "Hello World!\n" );

   // could have used std::println without the escaped new line character
   // std::println( "Hello World!" );

   int answer { 42 };

   std::println( "The answer to life, the universe, and everything is {}", answer );
}
