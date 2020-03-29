/*
    Thang điểm 0 -> 10.
*/

#include <iostream>
using namespace std;

int main(){
    float DTB = 8.01;
    // Lọc giỏi 
    if (DTB >= 8){
        if(DTB == 10){
            cout << "Con nha nguoi ta!\n";
        }else{
            cout << "Kha phet nhi!\n";
        }
    }else{
        if (DTB >= 6.5){
            cout << "Cung tam duoc!\n";
        }else if (DTB >= 4){
            cout << "Can co gang!\n";
        }else{
            cout << "Ve que nuoi bo!\n";
        }
    }
    cout << "Tiep tuc chuong trinh!";
}