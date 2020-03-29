#include <iostream>
using namespace std;

int main()
{
    cout << "continue vs for ex:\n";
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << "\t";
    }

    cout << "\ncontinue vs while ex:\n";
    int i = 0;
    while (i < 100)
    {
        if (i % 2 == 0)
        {
            i++;
            continue;
        }
        cout << i << "\t";
        i++;
    }
    i = 0;
    cout << "\ncontinue vs do-while ex:\n";
    do
    {
        if (i % 2 == 0)
        {
            i++;
            continue;
        }
        cout << i << "\t";
        i++;
    } while (i < 100);
}