/*
    Viết chương trình nhập họ tên, điểm toán, điểm văn của 1 học sinh. Tính điểm trung bình và xuất ra kết quả
*/

#include <iostream>
using namespace std;

float tinhDTB(float dT, float dV);

int main()
{
    string hoTen;
    float diemToan;
    float diemVan;

    cout << "Nhap ho ten: ";
    cin >> hoTen;

    do
    {
        cout << "Nhap diem toan: ";
        cin >> diemToan;
    } while (diemToan < 0 || diemToan > 10);

    do
    {
        cout << "Nhap diem van: ";
        cin >> diemVan;
    } while (diemVan < 0 || diemVan > 10);

    cout << "DTB cua ban " << hoTen << " la " << tinhDTB(diemToan, diemVan);
}

float tinhDTB(float dT, float dV)
{
    return (dT + dV) / 2;
}