#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define in insert
#define vll vector<ll>
#define pll pair<ll,ll>
#define all(x) (x).begin() , (x).end()
#define f first
#define s second
#define pr(x) cout<<x<<endl;
#define pr2(x,y) cout<<x<<" "<<y<<endl;
#define pr3(x,y,z) cout<<x<<" "<<y<<endl;
#define prv(v) for(auto x:v) cout<<x<<" ";
#define ffs fflush(stdout);
#define int ll
#define sz(x) (ll)x.size()
using namespace std;
 
const ll N =(1e5+5);
const ll MOD = 1e9+7;
const ll INF = LLONG_MAX;
const ll LOG = 29;
#define PI 3.141592653589793238
void solve()
{
     int n,m,q;
     cin>>n>>m>>q;
     int arr[n]={0};
     int arr2[n]={0};
     bool flag=true;
     int seats=0;
     while(q--)
     {
          char ch;
          int x;
          cin>>ch>>x;
          if(ch=='+')
          {
               arr[x-1]++;
               seats++;
               if(arr[x-1]<0)
               flag=false;
          }
          if(seats>m)
          {
               flag=false;
          }
          if(ch=='-')
          {
               arr[x-1]--;
               seats--;
               if(arr[x-1]<0)
               flag=false;
          }
          if(seats>m)
          {
               flag=false;
          }
     }
     for(int i=0;i<n;i++)
     {
          if(arr[i]<0)
          {
               flag=false;
          }
     }
     if(!flag)
     cout<<"Inconsistent\n";
     else
     cout<<"Consistent\n";
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }    
     
}