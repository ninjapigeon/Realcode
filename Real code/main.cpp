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
    int Coin = 0;
    srand( time_t( NULL ) );
    for ( int i = 0; i < 100; ++i )
    {
        Coin = randRange( 4, 10 );
        switch (Coin)
        {
            case 2 : cout << "Heads \n";
                break;
            case 1 : cout << "Tails \n";
                break;
            default: cout << "Error \n";
        }
    }
}