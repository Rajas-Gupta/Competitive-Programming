#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,m,d;
    int pro,sum;
    cin>>n;
    while (n--)
    {
        cin>>x>>m>>d;
        pro=x*m;
        sum=x+d;
        cout<<min(pro,sum)<<endl;
    }
    
    return 0;
}