#include <iostream>
using namespace std;

#define PASSW 12345
int main(){
    int passw = 0;
    cout << "Nhap ma pin = ";
    cin >> passw;
    if(passw == PASSW){
        cout << "Moi ban rut tien!\n";
        cout << "Rut tien thanh cong!\n";
    }else{
        cout << "Sai ma pin roi ban oi!\n";
    }
    cout << "Tam biet!\n";
}