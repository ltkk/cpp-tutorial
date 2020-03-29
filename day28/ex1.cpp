#include <iostream>
#include <string>
using namespace std;

int main(){

    // Khai báo
    string brand;
    string first_name = "Hieu";
    string last_name = "Nguyen Van";
    // Khởi tạo
    brand = "Lap Trinh";

    // Nối chuỗi
    brand += " Khong Kho";
    cout << first_name + " " + last_name << "\n";
    // Lấy chiều dài
    cout << "Length = " << brand.length() << "\n";

    // sub string
    cout << "substr = " << brand.substr(0, 3) << "\n";

    // index
    string str = "abcd";
    str[0] = 'A';
    cout << "str = " << str << "\n";

    // Nhập có khoảng trắng
    // getline (cin, str);
    // cout << "str = " << str << "\n";
    str = "abcd";
    cout << str.append("str");

    str != brand;
}