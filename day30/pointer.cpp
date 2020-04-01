#include <iostream>
using namespace std;


int main()
{
  // Khai báo + khởi tạo biến value = 10
  int value = 10;
 
  // Lấy giá trị của biến value
  cout << "\nGia tri cua `value` = " << value;
  // Lấy địa chỉ của biến value
  cout << "\nDia tri cua `value` = " << &value;
 
  cout << "\n-------------------\n";
 
  /* 
  Khai báo + khởi tạo biến con trỏ p 
  có giá trị là địa chỉ của biến value 
  */
  int *p = &value;
 
  // Lấy giá trị của con trỏ p
  cout << "\nGia tri cua con tro `p` = " << p;
  // Lấy địa chỉ của con trỏ p
  cout << "\nDia tri cua con tro `p` = " << &p;
  // Lấy giá trị của biến ma con trỏ p đang trỏ tới dùng toán tử *
  cout << "\nGia tri cua bien ma con tro `p` dang tro toi = " << *p;
 
  cout << "\n-------------------\n";
 
  /* 
  Thay đổi giá trị của biến value thông qua con trỏ p
  Giống như hàm scanf() có thể thay đổi giá trị của biến khi nhận vào địa chỉ,
  con trỏ khi có địa chỉ của 1 biến hoàn toàn có thể thay đổi giá trị của
  biến đó theo cách dưới đây: 
  */
  // Lấy giá trị của biến value
  cout << "\nGia tri cua `value` = " << value;
  // Thay đổi giá trị của biến value thông qua `p`
  *p = 100;
  // Lấy giá trị của biến value
  cout << "\nGia tri cua `value` = " << value;
  // Lấy giá trị của biến ma con trỏ p đang trỏ tới dùng toán tử *
  cout << "\nGia tri cua bien ma con tro `p` dang tro toi = " << *p;
 
  cout << "\n-------------------\n";
 
  /*
  Việc lấy giá trị của biến thông qua con trỏ 
  chỉ là 1 cách khác để lấy được giá trị của biến đó. 
  
  */
  value = 1000;
  // Lấy giá trị của biến value
  cout << "\nGia tri cua `value` = " << value;
  // Lấy giá trị của biến ma con trỏ p đang trỏ tới dùng toán tử *
  cout << "\nGia tri cua bien ma con tro `p` dang tro toi = " << *p;
}