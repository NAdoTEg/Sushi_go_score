//
//  main.cpp
//  Sushi Go Score
//
//  Created by Nathan Straughan on 12/27/16.
//  Copyright © 2016 Nathan Straughan. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[1][5];
    
    for(int i=0; i<5; i++)
        name[1][i]= "          ";
    
    for(int i=0; i<5; i++)
        cout << name[1][i];
    
    return 0;
    
}

/*
 int scrBrd1[3][5];
 int scrBrd2[4][5];
 int scrBrd3[4][5];
 int pudBrd[2][5];
*/
