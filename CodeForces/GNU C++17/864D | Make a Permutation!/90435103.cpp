///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
using ll  = long long int;
using vll = vector<ll>;
using vii = vector<int>;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
using ull = unsigned long long int;
//=============Typedefines=============//
#define        sp           " "
#define        nn           "\n"
#define        F            first
#define        S            second
#define        pi           acos(-1.0)
#define        inf          1<<30 //2^30
#define        no           cout<<"NO"<<nn;
#define        yes          cout<<"YES"<<nn;
#define        all(x)       (x).begin(),(x).end()
#define        test         int t, tc; cin>>t; for( tc = 1;tc <= t ; tc++)
#define        deb(a)       cerr<<"Line "<<__LINE__<<" # "<<#a<<" -> "<<a<<nn;
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//=============Functions===============//
ll To_int(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
template<typename T>T gcd(T a,T b) {if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template<typename T>T lcm(T a,T b) {if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
void input()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
    #endif
}
bitset<200020>used;
int main()
{
   _00_
   //input();
    int n;
    cin>>n;
   int ara[n+1];
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        cin>>ara[i];
        mp[ara[i]]++;
    }
    int ans=0,j=0;
   vii v;
 
    for(int i=1;i<=n;i++)
    if(mp[i]==0)
    v.push_back(i);
    for(int i=1;i<=n;i++)
    {
        if(mp[ara[i]]==1)
        continue;
        if(ara[i]>v[j] || (ara[i]<v[j] && used[ara[i]]))
        {
            mp[ara[i]]--;
            ara[i]=v[j];
            j++;
            mp[ara[i]]++;
            ans++;
        }
        used[ara[i]]=1;
    }
      
      for(int i=0;i<=n;i++)
     {
         if(i==0)
         cout<<ans<<nn;
         else 
         cout<<ara[i]<<sp;
     }
   return 0;
}