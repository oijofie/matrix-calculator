//
//  main.cpp
//  matrix calculator
//
//  Created by RintaroYamauchi on 12/13/18.
//  Copyright © 2018 Rintaro Yamauchi. All rights reserved.
//

#include <iostream>

using namespace std;



int row_size(int row)
{
    cout << "input a column of a matrix" << endl;
    cin >> row;
    return row;
}

int column_size(int column)
{
    cout << "input a column of a matrix" << endl;
    cin >> column;
    return column;
}

//int input_matrix(matrix[row][column]);
/*int list_matrix[5];

for (int i = 0; i < 5; i++)
{
    list_matrix[i] = matrix;
}*/

int main()
{
    int row = 0, column = 0;
    int num = 0;
    row = row_size(row);
    column = column_size(column);
    
    int matrix[row][column];
    for (int r = 0; r < row; r++)
        for (int c = 0; c < column; c++)
        {
            cout << "input the number for " << r << c << endl;
            cin >> num;
            matrix[r][c] = num;
        }
    
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



// make function for matrix to print out
// make function to calculate matrix such as A*B, inverse, a*ab = a*b, i



