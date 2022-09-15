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
vector<ll>prime;
bitset<2000>status;
int getprime(int n)
{
    for(int i=2;i<=n+1;i++)
        if(n%i==0)
        return i;
}
vii arr[1000];
int main()
{
   _00_
   //input();
      test
      {
          for(int i=0;i<=1000;i++)
          arr[i].clear();
         int n;
         cin>>n;
         for(int i=1;i<=n;i++)
         {
             int x;
             cin>>x;
             arr[getprime(x)].push_back(i);
         }
         int cnt=0;
        int res[1001];
         for(int i=1;i<=1001;i++)
         {
             if(arr[i].size())
             {
                cnt++;
                for(auto it:arr[i])
                res[it]=cnt;
             }
         }
         cout<<cnt<<nn;
         for(int i=1;i<=n;i++)
         cout<<res[i]<<sp;
         cout<<nn;
      }
   return 0;
}