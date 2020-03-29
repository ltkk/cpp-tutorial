#include <iostream>
#include <string>
#include <io.h>
#include <fcntl.h>
using namespace std;

int main()
{
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    wcout << L"Tiếng Việt có dấu" << endl;
    wstring test;
    wcout << L"Hãy nhập vào một chuỗi ký tự:" << endl;
    // wcin >> 
    getline(wcin, test);
    wcout << L"Chuỗi ký tự mà bạn vừa mới nhập:" << endl;
    wcout << test; 
    return 0;
}