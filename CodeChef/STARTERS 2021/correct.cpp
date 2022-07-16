#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool j = false;
        int k;
        bool next;
        cin >> k;
        while (k--)
        {
            string s;
            cin >> s;
            if (s[0] == 'a' || s[0] == 'b' || s[0] == 'c' || s[0] == 'd' || s[0] == 'e' || s[0] == 'f' || s[0] == 'g' || s[0] == 'h' || s[0] == 'i' || s[0] == 'j' || s[0] == 'k' || s[0] == 'l' || s[0] == 'm')
            {
                next = true;
                j=true;

            }
            else if (s[0] == 'N' || s[0] == 'O' || s[0] == 'P' || s[0] == 'Q' || s[0] == 'R' || s[0] == 'S' || s[0] == 'T' || s[0] == 'U' || s[0] == 'V' || s[0] == 'W' || s[0] == 'X' || s[0] == 'Y' || s[0] == 'Z')
            {
                next = false;
                j=true;
            }
            else
            {
                j=false;
            }
            
            for (int i = 1; i < s.length(); i++)
            {
                if (next)
                {
                    if (s[i] == 'a' || s[i] == 'b' || s[i] == 'c' || s[i] == 'd' || s[i] == 'e' || s[i] == 'f' || s[i] == 'g' || s[i] == 'h' || s[i] == 'i' || s[i] == 'j' || s[i] == 'k' || s[i] == 'l' || s[i] == 'm')
                    {
                        j = true;
                    }
                    else
                    {
                        j = false;
                    }
                }
                else
                {
                    if (s[i] == 'N' || s[i] == 'O' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S' || s[i] == 'T' || s[i] == 'U' || s[i] == 'V' || s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z')
                    {
                        j = true;
                    }
                    else
                    {
                        j = false;
                    }
                }
            }
        }
        if (j)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}