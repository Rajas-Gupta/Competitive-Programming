#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n){
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        int max1,max2;
        max1=x*7;
        max2=(y*d)+((7-d)*z);
        cout<<max(max1,max2)<<endl;
        n--;
        }
}