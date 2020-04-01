#include <iostream>
using namespace std;

int main(){
    int month, year;
    cout << "Nhap thang: ";
    cin >> month;
    cout << "Nhap nam: ";
    cin >> year;
    switch (month)
    {
    case 2:
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            cout << "Thang 2 nam " << year << " co 29 ngay!\n";
        }else{
            cout << "Thang 2 nam " << year << " co 28 ngay!\n";
        }
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "Thang " << month << " co 31 ngay!\n";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "Thang " << month << " co 30 ngay!\n";
        break;
    default:
        cout << "Nhap sai roi!\n";
        break;
    }
    cout << "Ket thuc!";
}