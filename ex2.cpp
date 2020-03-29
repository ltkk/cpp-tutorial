#include <iostream>
#include <math.h>
/*
    Bài 14: Tính S(n) = x^1 + x^3 + x^5 + … + x^2n + 1
*/

int main(){
    int n, x;
    std::cout << "Nhap x = ";
    std::cin >> x;
    do{
        std::cout << "Nhap n = ";
        std::cin >> n;
    }while (n < 0);
    long long S = 0;
    n = 2*n + 1;
    for(int i = 1; i <= n; i+=2){
        S += pow(x, i);
    }
    std::cout << "S = " << S;
}