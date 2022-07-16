#include <math.h>
#include <iostream>
using namespace std;
int main() {
    int N = 0;
    long long j=0;
    cin>>N;
    long long data[N];
    for(int i=0; i<N; i++)
        cin>>data[i];
	for(int i=0; i<N;i++){
        long long k=N-i-1;
		j=j+((data[i]%10)*pow(10,k));
	}
    cout<<j;
    if(j%10==0){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
    return 0;
}