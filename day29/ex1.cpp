#include <iostream>
#include <string>
using namespace std;

const int MAX = 1000;

string to_lower(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    return str;
}

void product_input(string products[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap ten SP thu " << i << ": ";
        getline(cin, products[i]);
    }
}

void product_output(string products[], int n)
{
    cout << "DS san pham:\n";
    for (int i = 0; i < n; i++)
    {
        cout << i << ". " << products[i] << "\n";
    }
}

int product_find(string products[], int n, string keyword)
{
    keyword = to_lower(keyword);
    for (int i = 0; i < n; i++)
    {
        if (to_lower(products[i]) == keyword)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string products[MAX];
    int n;
    do
    {
        cout << "Nhap so luong san pham n = ";
        cin >> n;
    } while (n <= 0 || n > MAX);
    cin.ignore();
    product_input(products, n);
    int your_case, search_result;
    string keyword;

    while (true)
    {
        cout << "=============== MENU ===============";
        cout << "\n1. Tim kiem";
        cout << "\n2. Hien thi";
        cout << "\n3. Thoat chuong trinh";
        do
        {
            cout << "\nNhap lua chon cua ban: ";
            cin >> your_case;
        } while (your_case < 1 || your_case > 3);

        cin.ignore();
        switch (your_case)
        {
        case 1:
            cout << "=================================\n";
            cout << "Nhap ten san pham can tim kiem: ";
            getline(cin, keyword);
            search_result = product_find(products, n, keyword);
            if (search_result != -1)
            {
                cout << "=> Tim thay san pham o chi so " << search_result << "\n";
            }
            else
            {
                cout << "=> Khong ton tai SP!\n";
            }
            break;
        case 2:
            cout << "=================================\n";
            product_output(products, n);
            break;
        case 3:
            cout << "Hen gap lai!";
            return 0;
        }
    }
}