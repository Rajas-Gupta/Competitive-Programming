#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t, i, n;
    cin >> n;
    while (n--)
    {
        cin >> t;
        if (t == 1)
        {
            cout << "3\n";
        }
        else if (t == 2)
        {
            cout << "33\n";
        }
        else
        {
            cout << "3";
            for (i = 1; i <= t - 2; i++)
            {
                cout << "0";
            }
            cout << "3\n";
        }
    }
}