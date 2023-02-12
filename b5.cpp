#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 0; i < 24; i++)
    {
        if (i * 1.0 / 12 == 0)
            cout << "12 midnight\n";
        else if (i * 1.0 / 12 == 1)
            cout << "12 noon\n";
        else if (i * 1.0 / 12 < 1)
            cout << i % 12 << "am\n";
        else
            cout << i % 12 << "pm\n";
    }
    system("pause");
}