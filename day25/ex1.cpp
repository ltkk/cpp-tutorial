/*
    Sắp xếp lẻ tăng dần nhưng giá trị khác giữ nguyên vị trí
*/

#include <iostream>
using namespace std;

const int MAXN = 100;

void matrix_input(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << "\nNhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void matrix_output(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << "\t";
    }
}

void swap_to_number(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort_array(int a[], int n)
{
    for (int first_index = 0; first_index < n - 1; first_index++)
    {
        if (a[first_index] % 2 == 0)
        {
            continue;
        }
        for (int second_index = first_index + 1; second_index < n; second_index++)
        {
            if (a[second_index] % 2 != 0 && a[first_index] > a[second_index])
            {
                swap_to_number(a[first_index], a[second_index]);
            }
        }
    }
}

int main()
{
    int arr[MAXN];
    int n;
    do
    {
        cout << "\nNhap so luong n = ";
        cin >> n;
    } while (n < 1 || n > MAXN);
    matrix_input(arr, n);
    cout << "\nTruoc khi sap xep: ";
    matrix_output(arr, n);
    sort_array(arr, n);
    cout << "\nSau khi sap xep: ";
    matrix_output(arr, n);
}