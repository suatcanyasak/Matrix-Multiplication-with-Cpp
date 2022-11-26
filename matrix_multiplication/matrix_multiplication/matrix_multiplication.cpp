#include <iostream>
using namespace std;
int main()
{
    int row1, col1, row2, col2;
    int i, j, k;
    while (1)
    {
        cout << "Matrix A(mxn)" << endl;
        cout << "row: ";
        cin >> row1;
        cout << "col: ";
        cin >> col1;
        cout << "Matrix B(mxn)" << endl;
        cout << "row: ";
        cin >> row2;
        cout << "col: ";
        cin >> col2;
        if (col1 != row2)
        {
            cout << "matrices can't be multiplied" << endl;
        }
        else if (col1 == row2)
        {
            break;
        }
    }
    float a_matrix[100][100];
    float b_matrix[100][100];
    float result_matrix[100][100];
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            cout << "Matrix A[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> a_matrix[i][j];
        }
    }
    cout << endl;
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            cout << "Matrix B[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> b_matrix[i][j];
        }
    }
    // multiplication	
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            result_matrix[i][j] = 0;
            for (k = 0; k < col1; k++)
            {
                result_matrix[i][j] += a_matrix[i][k] * b_matrix[k][j];
            }
        }
    }
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            cout << result_matrix[i][j] << " ";
        }
        cout << endl;
    }
}
