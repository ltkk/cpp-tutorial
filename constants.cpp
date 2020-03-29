/*
    Biến: Giá trị có thể thay đổi
    Hằng: Giá trị không thể thay đổi, gán giá trị khi cấp phát.

    Có 2 cách khai báo hằng:
    + Sử dụng #define
    + Sử dụng từ khóa const
*/

#include <iostream>
using namespace std;

#define PI_VAR 3.14

int main()
{
    // Biến
    // char x = '5';
    // cout << x << "\n";
    // x = 'c';
    // cout << x << "\n";

    // Hằng số
    cout << PI_VAR << "\n";
    // Sử dụng const
    const float PI = 3.14;
    cout << PI;
}