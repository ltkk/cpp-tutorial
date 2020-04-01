#include <iostream>
using namespace std;

int main()
{
    cout << "break vs for ex:\n";
    for (int i = 0; i < 100; i++)
    {
        if (i > 5)
        {
            break;
        }
        cout << i << "\t";
    }

    cout << "\nbreak vs while ex:\n";
    int i = 0;
    while (i < 100)
    {
        if (i > 10)
        {
            break;
        }
        cout << i << "\t";
        i++;
    }
    i = 0;
    cout << "\nbreak vs do-while ex:\n";
    do
    {
        if (i > 10)
        {
            break;
        }
        cout << i << "\t";
        i++;
    } while (i < 100);
}