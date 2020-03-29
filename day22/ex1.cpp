#include <iostream>
using namespace std;

#define MAXN 100

void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        // cout << "\nNhap a[" << i << "] = ";
        a[i] = i * 5;
    }
}

void XuatMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        cout << "a[" << i << "] = " << a[i] << "\n";
    }
}

int main(){
    int arr[MAXN];
    int n;
    do{
        cout << "\nNhap so luong n = ";
        cin >> n;
    }while (n < 1 || n > MAXN);
    NhapMang(arr, n);
    XuatMang(arr, n);
}