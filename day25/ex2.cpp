/*
    Bài 264: Trộn 2 mảng đã tăng thành 1 mảng được sắp xếp tăng
*/

#include <iostream>
using namespace std;

const int MAXN = 100;

int matrix_input(int a[])
{
    int n;
    do
    {
        cout << "\nNhap so luong n = ";
        cin >> n;
    } while (n < 1 || n > MAXN);
    for (int i = 0; i < n; ++i)
    {
        cout << "\nNhap a[" << i << "] = ";
        cin >> a[i];
    }
    return n;
}

void matrix_output(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << "\t";
    }
}

void combine(int a[], int an, int b[], int bn, int c[])
{
    int c_length = 0;
    int a_index = 0;
    int b_index = 0;
    while (a_index < an || b_index < bn)
    {
        if (a_index >= an)
        {
            c[c_length++] = b[b_index];
            b_index++;
        }
        else if (b_index >= bn)
        {
            c[c_length] = a[a_index];
            a_index++;
            c_length++;
        }
        else
        {
            if (a[a_index] <= b[b_index])
            {
                c[c_length] = a[a_index];
                a_index++;
            }
            else
            {
                c[c_length] = b[b_index];
                b_index++;
            }
            c_length++;
        }
    }
}

int main()
{
    int a[MAXN];
    int b[MAXN];
    int c[2 * MAXN];
    int an = matrix_input(a);
    int bn = matrix_input(b);
    combine(a, an, b, bn, c);
    matrix_output(c, an + bn);
    system("pause");
}