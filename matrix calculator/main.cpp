//
//  main.cpp
//  matrix calculator
//
//  Created by oijofie on 12/13/18.
//  Copyright © 2018 oijofie. All rights reserved.
//

#include <iostream>

using namespace std;

void define_matrix(int **matrix, int row, int column)
{
    int num = 0;
    
    cout << "input numbers of rows and columns" << endl;
    cin >> row;
    matrix = new int*[row];
    cin >> column;
    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int[column];
    }
    
    for (int r = 0; r < row; r++)
        for (int c = 0; c < column; c++)
        {
            cout << "input the number for " << r << c << endl;
            cin >> num;
            matrix[r][c] = num;
        }
}

void show_matrix(int **matrix, int row, int column)
{
    cout << "show_matrix is successfully execused" << endl;
    for (int r = 0; r < row; r++)
        for (int c = 0; c < column; c++)
        {
            cout << "| " << matrix[r][c];
            if (c == column)
            {
                cout << " |" << endl;
                cout << "--------" << endl;
            }
        }
}


int main()
{
    int row = 0, column = 0;
    int **matrix = 0;
    
    define_matrix(matrix, row, column);
    show_matrix(matrix, row, column);
    
    
}



// make function for matrix to print out
// make function to calculate matrix such as A*B, inverse, a*ab = a*b, i



