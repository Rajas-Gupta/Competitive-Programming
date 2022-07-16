#include<iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while (t--)
    {
        long long D,d,P,Q,sum;
        cin>>D>>d>>P>>Q;
        long long n=D/d;
        if(n%2==0){
        sum=d*(n/2)*((2*P)+((n-1)*Q));
        sum+=(D%d)*(P+n*Q);
        }
        else{
            sum=d*(n)*((P)+(((n-1)/2)*Q));
            sum+=(D%d)*(P+n*Q);
        }
        cout<<sum<<endl;
    }
    
}