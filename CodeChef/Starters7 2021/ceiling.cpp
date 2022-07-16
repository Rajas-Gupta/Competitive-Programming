#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        long a,b,max1,min1,ans;
        cin>>a>>b;
        max1=max(a,b);
        min1=min(a,b);
        for (int x = min1; x < max1+1; x++)
        {
            long ans2;
            if(x==min1){
                ans=((b-x)/2)+((x-a)/2);
                if (((b-x)%2)!=0 && ((b-x)/2)>0)
                {
                    ans+=1;
                }
                if (((x-a)%2)!=0 && ((x-a)/2)>0)
                {
                    ans+=1;
                }
            }
            ans2=((b-x)/2)+((x-a)/2);
            if (((b-x)%2)!=0 && ((b-x)/2)>0)
                {
                    ans2+=1;
                }
                if (((x-a)%2)!=0 && ((x-a)/2)>0)
                {
                    ans2+=1;
                }
            ans=max(ans,ans2);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}