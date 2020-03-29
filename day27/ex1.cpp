#include <iostream>
using namespace std;

const int MAX_ROW = 100;
const int MAX_COL = 100;

void matrix_input(int a[][MAX_COL], int nrow, int ncol);
void matrix_output(int a[][MAX_COL], int nrow, int ncol);
void row_swap(int a[][MAX_COL], int ncol, int first_row, int second_row);
void col_swap(int a[][MAX_COL], int nrow, int first_col, int second_col);
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


    // hoán vị dòng
    int first_row, second_row;
    do {
        cout << "Nhap 2 chi so hang can hoan vi: ";
        cin >> first_row >> second_row;
    }while (first_row < 0 || second_row < 0 || first_row >= nrow || second_row >= nrow);

    row_swap(a, ncol, first_row, second_row);
    matrix_output(a, nrow, ncol);

    // hoán vị dòng
    int first_col, second_col;
    do {
        cout << "Nhap 2 chi so hang can hoan vi: ";
        cin >> first_col >> second_col;
    }while (first_col < 0 || second_col < 0 || first_col >= ncol || second_col >= ncol);

    col_swap(a, nrow, first_col, second_col);
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

void row_swap(int a[][MAX_COL], int ncol, int first_row, int second_row){
    for (int idx = 0; idx < ncol; idx++){
        // swap a[first_row][idx] và a[second_row][idx]
        int tmp = a[first_row][idx];
        a[first_row][idx] = a[second_row][idx];
        a[second_row][idx] = tmp;
    }
}

void col_swap(int a[][MAX_COL], int nrow, int first_col, int second_col){
    for (int idx = 0; idx < nrow; idx++){
        // swap a[idx][first_col] và a[idx][second_col]
        int tmp = a[idx][first_col];
        a[idx][first_col] = a[idx][second_col];
        a[idx][second_col] = tmp;
    }
}