//
//  main.cpp
//  Real code
//
//  Created by Darth Sith on 2014-04-13.
//  Copyright (c) 2014 Darth Sith. All rights reserved.
//

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int randRange (int low, int high)
{
    // we get a random number, get it to be between 0 and the number
    // of values in our range, then add the lowest possible value
    return rand() % ( high - low +1) + low;
}


int main ()
{
    srand( time_t( NULL ) );
    for ( int i = 0; i < 100; ++i )
    {
        
        switch (randRange( 1, 2 )) // At this point, i'm merely trying to output the appropriate text based on the result.
        {
            case 2 : cout << "Heads \n";
                break;
            case 1 : cout << "Tails \n";
                break;
            default: cout << "Error \n";
                break;
        }
    }
}