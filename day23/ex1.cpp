#include <iostream>
#include <cstdio>
#include <float.h>
using namespace std;

/*
    Bài 122: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực
*/

#define MAXN 100

void NhapMang(float a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void XuatMang(float a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << "a[" << i << "] = " << a[i] << "\n";
    }
}

float TimMax(float a[], int n)
{
    float maxValue = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > maxValue)
        {
            maxValue = a[i];
        }
    }
    return maxValue;
}

float SoAmLonNhat(float a[], int n)
{
    float result = 1;
    int i = 0;
    for (; i < n; i++)
    {
        if (a[i] < 0)
        {
            result = a[i];
            break;
        }
    }
    if (result == 1)
    {
        return 1;
    }
    for (i = i + 1; i < n; i++)
    {
        if (a[i] < 0 && a[i] > result)
        {
            result = a[i];
        }
    }
    return result;
}

int TimchiSoMax(float a[], int n)
{
    float maxValue = a[0];
    int chiSo = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > maxValue)
        {
            maxValue = a[i];
            chiSo = i;
        }
    }
    return chiSo;
}

int main()
{
    float arr[MAXN];
    int n;
    do
    {
        cout << "\nNhap so luong n = ";
        cin >> n;
    } while (n < 1 || n > MAXN);
    NhapMang(arr, n);
    XuatMang(arr, n);
    cout << "\nMax = " << TimMax(arr, n);
    cout << "\nChi so Max = " << TimchiSoMax(arr, n);
    float value = SoAmLonNhat(arr, n);
    if (value >= 0)
    {
        cout << "\nMang khong co so am!";
    }
    else
        cout << "\nSo am lon nhat = " << value;
    cout << "\n";
    system("pause");
}