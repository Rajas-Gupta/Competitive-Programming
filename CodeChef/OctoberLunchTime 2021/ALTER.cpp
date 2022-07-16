#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        if ((p%a==0)&&(q%b==0))
        {
            int x=p/a;
            int y=q/b;
            if ((x-y==1)||(y-x==1)||(x-y==0))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}