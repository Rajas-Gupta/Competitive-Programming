#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a=0,b=0,c=0,d=0,D=0;
    cin>>t;
    while (t--)
    {
        cin>>D>>d>>a>>b>>c;
        int mod=D*d;
        if (mod>=42)
        {
            cout<<c<<endl;
        }
        else if (mod<42 && mod>=21)
        {
            cout<<b<<endl;
        }
        else if (mod<21 && mod>=10)
        {
            cout<<a<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    
    return 0;
}