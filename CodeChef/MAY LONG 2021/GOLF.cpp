#include <bits/stdc++.h>
using namespace std;

int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        
        int x, n, k;
        cin >> n >> x >> k;
        bool ans = false;
        // if (n <= 100)
        {
            if (x % k == 0)
            {
                ans = true;
            }
            else if (((n + 1) - x) % k == 0)
            {
                ans = true;
            }

            if (ans)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}