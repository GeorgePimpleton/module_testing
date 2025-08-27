export module my_stuff;

// export the import stdlib modules
export import <iostream>;
export import <string>;

export void my_func( )
{
   std::cout << "Called my_func\n";
}

export std::string test { "Hello Test String!" };
