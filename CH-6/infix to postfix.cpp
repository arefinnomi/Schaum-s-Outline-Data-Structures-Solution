***************/
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              // Fig. 18.1: Fig18_01.cpp
// Demonstrating string assignment and concatenation.
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string string1( "cat" );
   string string2; // initialized to the empty string
   string string3; // initialized to the empty string

   string2 = string1; // assign string1 to string2
   string3.assign( string1 ); // assign string1 to string3
   cout << "string1: " << string1 << "\nstring2: " << string2
      << "\nstring3: " << string3 << "\n\n";

   // modify string2 and string3 
   string2[ 0 ] = string3[ 2 ] = 'r';

   cout << "After modification of string2 and string3:\n" << "string1: " 
      << string1 << "\nstring2: " << string2 << "\nstring3: ";

   // demonstrating member function at
   for ( int i = 0; i < string3.length(); ++i ) 
      cout << string3.at( i );

   // declare string4 and string5
   string string4( string1 + "apult" ); // concatenation
   string string5; // initiali