#include<iostream>

/*
    Tính tổng 1 + 2 + 3 + ... + n
*/

long sum_calc(int n)
{
	if(n == 0)
		return 0;
	return sum_calc(n - 1) + n;
}

// sum (3) = 3 + 3
//          1 + 2
//          0 + 1
//          0

int main()
{
	int n, S;
	std::cout << "Nhap n = ";
    std::cin >> n;

	S = sum_calc(n);
	std::cout << "S = " << S;

	return 0;
}