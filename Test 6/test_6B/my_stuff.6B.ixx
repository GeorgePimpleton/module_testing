export module my_stuff;

import <iostream>;
import <string>;

export void my_func( )
{
   std::cout << "Called my_func\n";
}

export std::string test { "Hello Test String!" };
