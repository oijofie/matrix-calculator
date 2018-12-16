//
//  main.cpp
//  matrix calculator
//
//  Created by RintaroYamauchi on 12/13/18.
//  Copyright © 2018 Rintaro Yamauchi. All rights reserved.
//

#include <iostream>

using namespace std;

void matrix(int a11, int a12, int a21, int a22)
{
    int array[4] = {a11, a12, a21, a22};
    cout << "matrix calculator" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "| " << array[i];
        if (i == 1)
            cout << endl << "-------" << endl;
    }
}

int main()
{
    int a11, a12, a21, a22;
    
    cout << "matrix calculator" << endl;
    cout << "-------------------" << endl;
    cout << " | a11 | a12 |  |  |" << endl;
    cout << "-------------------" << endl;
    cout << " | a21 | a22 |  |  |" << endl;
    cout << "-------------------" << endl;
    
    cout << "input numbers for a11, a12, a21, a22" << endl;
    cin >> a11 >> a12 >> a21 >> a22;
    matrix(a11, a12, a21, a22);
   
    
}

// make function for matrix to print out
// make function to calculate matrix such as A*B, inverse, a*ab = a*b, i



