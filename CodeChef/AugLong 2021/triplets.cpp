#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        for (int c = 1; c <= n; c++)
        {
            for (int B = c; B <= n; B += c)
            {
                if (B % c == 0)
                {
                    for (int A = c; A <= n; A += B)
                    {
                        if (A % B == c)
                        {
                            count++;
                        }
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}