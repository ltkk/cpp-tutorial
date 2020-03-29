#include <iostream>

int main()
{
    /*
        In n lần dòng chữ "Lap Trinh Khong Kho!"
    */
    // int n;
    // std::cout << "Nhap n = ";
    // std::cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     std::cout << "Lap Trinh Khong Kho!\n";
    // }

    /*
        Tính tổng các số trong [a; b]
    */
    int sum = 0;
    int a, b;
    do
    {
        std::cout << "Nhap a & b: ";
        std::cin >> a >> b;
    }while(a > b);

    for(int i = a; i <= b; i++){
        sum += i;
    }
    std::cout << "sum = " << sum;
}