#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int X=0,P=0,G=0,arrx[10]={0},poriginal=0;
    cin>>t;
    while (t--)
    {
        int countmin=0,countmax=0;
        cin>>G>>P;
        for (int i = 0; i < 11; i++)
        {
            cin>>arrx[i];
        }
        poriginal=arrx[P];
        for (int i = 9; i >= P-3; i--)
        {
            if (G==arrx[i])
            {
                countmax++;
                countmin++;
            }
            if (G>G-(arrx[i]))
            {
                arrx[i-1]=arrx[i-1]-(G-arrx[i]);
                countmax++;
                countmin++;
            }
            if (G<arrx[i])
            {
                arrx[i-1]=arrx[i-1]+(arrx[i]-G);
                countmax++;
                countmin++;
            }
            
            
            
        }
        if (poriginal!=P)
            {
                countmax+=((p-poriginal)/G));
            }
        cout<<countmin<<" "<<countmax<<endl;
    }
    
    return 0;
}