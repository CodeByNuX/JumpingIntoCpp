/*
1. Write a program that prints out the entire lyrics to a full rendition of
“99 Bottles of Beer”. (In case you don’t know this song, the words are here:
http://en.wikipedia.org/wiki/99_Bottles_of_Beer)

Allain, Alex. Jumping into C++ (p. 89). Cprogramming.com. Kindle Edition.

*/

#include <iostream>

using namespace std;

int main()
{
    string input;

    for(int i = 99;i>0;i--)
    {
        cout << "\n";

       if (i==1)
       {
           // single
           cout << i << " bottle of beer on the wall.\n"
           << i
           << " bottle of beer.\n"
           << "if one of the bottle just happen to fall,\n"
           << i-1 << " bottle of beer on the wall.\n";
       } else
       {
           // plural
           cout << i << " bottles of beer on the wall.\n" << i
           << " bottles of beer.\n"
           << "if one of the bottles just happen to fall, \n"
           << i-1 << " bottles of beer on the wall.\n";

       }
        cout << "\n";
       //debugging, uncomment.
       //cin >> input;

    }
    return 0;

    }
