/*
    Liệt kê tất cả các số chính phương nhỏ hơn n
*/

#include <iostream>
#include <math.h>
using namespace std;

// Kiểm tra 1 số
bool ktSoChinhPhuong(int n)
{
    double kq = sqrt(n);
    if (kq == (int)kq)
    {
        return true;
    }
    return false;
}

void lietKe(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (ktSoChinhPhuong(i) == true)
        {
            cout << i << "\t";
        }
    }
}

void lietKe2(int n){
    int number = 1, kq;
    while(true){
        kq = number * number;
        if(kq > n){
            break;
        }
        cout << kq << "\t";
        number++;
    }
}

int main()
{
    int n;
    do
    {
        cout << "Nhap n = ";
        cin >> n;
    } while (n < 1);
    // lietKe(n);
    lietKe2(n);
}