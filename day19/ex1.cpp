#include <iostream>
using namespace std;

/*
    Bài 3: Tính S(n) = 1/1 + 1/2 + 1/3 + … + 1/n
*/

int main(){
    float S = 0;
    int n;
    do{
        cout << "Nhap n = ";
        cin >> n;
    }while (n <= 0);
    
    for(int i = 1; i <= n; i++){
        S = S + 1/ (float)i;
    }
    cout << "S = " << S;
}