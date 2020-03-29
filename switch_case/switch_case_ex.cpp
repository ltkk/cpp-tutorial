#include <iostream>
using namespace std;

int main(){
    int first_num, second_num;
    char opera;

    cout << "Nhap 2 so nguyen: ";
    cin >> first_num >> second_num;
    cout << "Nhap phep toan: ";
    cin >> opera;

    switch (opera)
    {
    case '+':
        cout << first_num + second_num << "\n";
        break;
    case '-':
        cout << first_num - second_num << "\n";
        break;
    case '*':
        cout << first_num * second_num << "\n";
        break;
    case '/':
        if(second_num != 0){
            cout << first_num / second_num << "\n";
        }else{
            cout << "Khong the chia cho 0!\n";
        }
        break;
    default:
        cout << "Khong co phep toan \"" << opera << "\"\n";
        break;
    }
    cout << "Ket thuc!";
}