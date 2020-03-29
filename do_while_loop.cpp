#include <iostream>
using namespace std;

/*
    do:
        làm gì đó
    kiểm tra điều kiện;
*/

/*
    S = 10
    Tìm x nhỏ nhất, biết 1 + 2 + 3 + ... + x > 1000,
*/

/*
    Nhập 1 số nguyên dương.
*/

int main(){
    int number;
    do{
        cout << "Nhap number = ";
        cin >> number;
        if(number <= 0){
            cout << "Nhap sai roi!\n";
        }
    }while(number <= 0);
}