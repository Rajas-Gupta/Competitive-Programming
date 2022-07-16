#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        long k,e,count=0;
        cin>>e>>k;
        while((e/k)>0){
            e=e/k;
            count+=1;
        }
        cout<<count+1<<endl;
        
    }
    
    return 0;
}