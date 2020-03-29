#include <iostream>
using namespace std;

const int MAX_ROW = 100;
const int MAX_COL = 100;

void matrix_input(int a[][MAX_COL], int nrow, int ncol);
void matrix_output(int a[][MAX_COL], int nrow, int ncol);

int main()
{
    int a[MAX_ROW][MAX_COL];
    int nrow, ncol;
    do{
        cout << "Nhap so hang, so cot: ";
        cin >> nrow >> ncol;
    }while (nrow <= 0 || ncol <= 0 || nrow > MAX_ROW || ncol > MAX_COL);
    matrix_input(a, nrow, ncol);
    matrix_output(a, nrow, ncol);
}

void matrix_input(int a[][MAX_COL], int nrow, int ncol)
{
    for (int i = 0; i < nrow; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout << "Nhap a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

void matrix_output(int a[][MAX_COL], int nrow, int ncol)
{
    for (int i = 0; i < nrow; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}