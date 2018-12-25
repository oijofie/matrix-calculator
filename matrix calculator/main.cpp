//
//  main.cpp
//  matrix calculator
//
//  Created by oijofie on 12/13/18.
//  Copyright © 2018 oijofie. All rights reserved.
//

#include <iostream>

using namespace std;

void show_matrix(int ***matrix, int row, int column)
{
    cout << "show_matrix is successfully execused" << endl;
    cout << "select the matrix you want to see" << endl;
    int s;
    cin >> s;
    
    for (int r = 0; r < row; r++)
        for (int c = 0; c < column; c++)
        {
            cout << "| " << matrix[s][r][c];
            if (c == column-1)
            {
                int n = 0;
                cout << " |" << endl;
                cout << "-";
                while(n <= c)
                {
                    cout << "---";
                    n++;
                }
                cout << "-" << endl;
            }
        }
}

int set_matrix(int ***matrix, int select, int row_set, int column_set)
{
    for (int s = 0; s < select; s++)
    {
        matrix[s] = new int*[row_set];
        for (int r = 0; r < row_set; r++)
        {
            matrix[s][r] = new int[column_set];
            for (int c = 0; c < column_set; c++)
            {
                matrix[s][r][c] = 0;
            }
        }
    }
    cout << "set_matrix is executed " << endl;
    return ***matrix;
}

int define_matrix(int ***matrix, int select, int row, int column)
{
    int num = 0;
    int s = 0;
    cout << "select the matrix you want to input the data" << endl;
    cin >> s;
    cout << "define rows and columns" << endl;
    cin >> row;
    cin >> column;
    matrix[s] = new int*[row];
    for (int r = 0; r < row; r++)
    {
        matrix[s][r] = new int[column];
        for (int c = 0; c < column; c++)
        {
            cout << "input the number for " << r+1 << c+1 << endl;
            cin >> num;
            matrix[s][r][c] = num;
        }
    }
    //show_matrix(matrix, row, column);
    return ***matrix;
}

void transpose(int **matrix, int row, int column)
{
    for (int r = 0; r < row; r++)
        for (int c = 0; c < column; c++)
        {
            cout << "matrix" << r << c << " is " << matrix[r][c];
            matrix[r][c] = matrix[c][r];
            cout << matrix[r][c];
        }
    
}





int main()
{
    const int select = 5;
    const int row_set = 3, column_set = 3;
    int row = 0, column = 0;
    int ***matrix = new int**[select];
    
    set_matrix(matrix, select, row_set, column_set);
    define_matrix(matrix, select, row, column);
    //show_matrix(matrix, row, column);
    
   
}



// make function for matrix to print out
// make function to calculate matrix such as A*B, inverse, a*ab = a*b, i



