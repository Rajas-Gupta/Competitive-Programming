#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n){
        int c,g;
        cin>>g>>c;
        cout<<(c*c)/(2*g)<<endl;
        n--;
    }
    return 0;
}