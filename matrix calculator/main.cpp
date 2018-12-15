//
//  main.cpp
//  matrix calculator
//
//  Created by RintaroYamauchi on 12/13/18.
//  Copyright © 2018 Rintaro Yamauchi. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int a11, a12, a21, a22;
    int b11, b12, b21, b22;
    
    cout << "matrix calculator" << endl;
    cout << "-------------------" << endl;
    cout << " | a11 | a12 |  |  |" << endl;
    cout << "-------------------" << endl;
    cout << " | a21 | a22 |  |  |" << endl;
    cout << "-------------------" << endl;
    
    cout << "input numbers for a11, a12, a21, a22" << endl;
    cout << "inpu numbers for b11, b12, b21, b22" << endl;
    cin >> a11 >> a12 >> a21 >> a22;
    cin >> b11 >> b12 >> b21 >> b22;
    
}

// make function for matrix to print out
// make function to calculate matrix such as A*B, inverse, a*ab = a*b, i
