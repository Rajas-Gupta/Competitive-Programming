#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,x;
        cin>>x>>a>>b;
        if (x>=31 && x<=40 && a>=101 && a<=120 && b>=1 && b<=5)
        {
            int solubil,net;
            solubil=a+((100-x)*b);
            net=solubil*10;
            cout<<net<<endl;
        }
        
    }
    
    return 0;
}