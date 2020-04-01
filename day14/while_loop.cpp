#include <iostream>
using namespace std;
/*
    S = 10
    Tìm x nhỏ nhất, biết 1 + 2 + 3 + ... + x > 1000,
*/
#define MAX_S 10
int main(){
    int sum = 0;
    int it = 1;
    while(sum <= MAX_S){
        sum = sum + it;
        it++;
    }
    cout << "x = " << it - 1 << "\tsum = " << sum;
}