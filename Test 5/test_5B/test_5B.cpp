// test_5B.cpp : formatting output

import <iostream>;
import <format>;

int main( )
{
   std::cout << "Hello World!\n";

   int answer { 42 };

   std::cout << std::format( "The answer to life, the universe, and everything is {}\n", answer );
}
