#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,x,y,z;
        cin>>a>>b>>c;
        cin>>x>>y>>z;
        int aq,bq,cq;
        int time=240;
        aq=time/a;
        aq=min(aq,20);
        int at,bt,ct;
        at=aq*a;
        time-=at;
        bq=time/b;
        bq=min(bq,20);
        bt=bq*b;
        time-=bt;
        cq=time/c;
        cq=min(cq,20);
        ct=cq*b;
        time-=ct;
        int marks;
        marks=(aq*x)+(bq*y)+(cq*z);
        cout<<marks<<endl;
    }
    
    return 0;
}