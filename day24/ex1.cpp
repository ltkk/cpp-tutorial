#include <iostream>
#include <stdlib.h>
using namespace std;

#define MAXN 100

/*
    Bài 155: Hãy tìm giá trị trong mảng các số thực xa giá trị x nhất
*/

int distance_calc(int a, int b){
    return abs(a - b);
}


void matrix_input(int a[], int n){
    for(int i = 0;i < n; ++i){
        cout << "\nNhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void matrix_output(int a[], int n){
    for(int i = 0;i < n; ++i){
        cout << "a[" << i << "] = " << a[i] << "\n";
    }
}

int find_element(int a[], int n, int x){
    int max_distance = distance_calc(a[0], x);
    int index = 0, current_distance;
    for(int idx = 1; idx < n; idx++){
        current_distance = distance_calc(a[idx], x);
        if(current_distance > max_distance){
            max_distance = current_distance;
            index = idx;
        }
    }
    return a[index];
}

int main(){
    int arr[MAXN];
    int n, x;
    cout << "Nhap gia tri x = ";
    cin >> x;
    do{
        cout << "\nNhap so luong n = ";
        cin >> n;
    }while (n < 1 || n > MAXN);
    matrix_input(arr, n);
    matrix_output(arr, n);
    
    cout << "Phan tu xa nhat co gia tri la " << find_element(arr, n, x) << endl; // end line
    
    system("pause");
}