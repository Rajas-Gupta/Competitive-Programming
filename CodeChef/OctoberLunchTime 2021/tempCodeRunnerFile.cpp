#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a;
        cin>>a;
        long int=pow(2,a),count=1;
        cout<<"1 ";
        for (int i = 1; i < a; i++)
        {
            cout<<i<<" ";
            count+=1;
        }
        cout<<(n-count)<<"\n";
    }
    
    return 0;
}