#include <iostream>
using namespace std;

int main()
{
    int lc;
    while (true)
    {
        cout << "******************************************\n";
        cout << "**    CHUONG TRINH QUAN LY SINH VIEN    **\n";
        cout << "**      1. Nhap du lieu                 **\n";
        cout << "**      2. In danh sach sinh vien       **\n";
        cout << "**      3. Sap xep sinh vien theo DTB   **\n";
        cout << "**      4. Xep loai sinh vien           **\n";
        cout << "**      5. Xuat DS sinh vien            **\n";
        cout << "**      0. Thoat                        **\n";
        cout << "******************************************\n";
        cout << "**       Nhap lua chon cua ban          **\n";

        do
        {
            cin >> lc;
            if (lc < 0 || lc > 5)
            {
                cout << "Nhap lai lua chon cua ban: ";
            }
        } while (lc < 0 || lc > 5);
        switch (lc)
        {
        case 1:
            cout << "Ban chon nhap du lieu!\n";
            break;
        case 2:
            cout << "Ban chon in danh sach sinh vien!\n";
            break;
        case 3:
            cout << "Ban chon sap xep danh sach sinh vien!\n";
            break;
        case 4:
            cout << "Ban chon sap xep loai sinh vien!\n";
            break;
        case 5:
            cout << "Ban chon xuat danh sach sinh vien!\n";
            break;
        default:
            cout << "Tam biet!\n";
            return 0;
            break;
        }
    }
}