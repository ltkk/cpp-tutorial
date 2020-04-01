/*
    int	    =>  4 bytes => kiểu số nguyên
    float   =>  4 bytes => kiểu số thực
    double  =>  8 bytes => kiểu số thực
    boolean =>  1 byte
    char    =>  1 byte
    string  => Không phải built-in data type; được dùng thường xuyên. 
*/
#include <iostream>
using namespace std;

int main(){
    // // Kiểu số nguyên
    // int age = 20.5; // 20,5
    // cout << age << "\n";
    // int v = 3E8; // e hoặc E đại diện cho 10 mũ ... 
    // cout << v << endl; // end line

    // // Kiểu số thực
    // float width = 2.5;
    // cout << width << "\n";
    // double height = 3.5;
    // cout << height << "\n";
    
    // // Kiểu đúng sai
    // bool is_success = 20;
    // cout << is_success << "\n";

    // Kiểu string
    string brand_name = "Lap Trinh Khong Kho";
    cout << brand_name << endl;

}