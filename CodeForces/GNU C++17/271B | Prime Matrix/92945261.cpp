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
bitset<100005>status;
void sieve()
{
    ll n=100005;
    status.set();
    status[0]=0;
    status[1]=0;
    for(int i=2; i*i<=n; i++)
    {
        if(status[i])
            for(int j=2; i*j<=n; j++)
                status[i*j]=0;
    }
    for(int i=2; i<=n; i++)
    {
        if(status[i])
            prime.push_back(i);
    }
}
int need[505][505];
int row[505],col[505];
int main()
{
   _00_
   //input();
      sieve();
      int n,m;
      cin>>n>>m;
      int ara[n+1][m+1];
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          cin>>ara[i][j];
      }
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
         {
             if(!status[ara[i][j]])
             {
                 int idx=upper_bound(all(prime),ara[i][j])-prime.begin();
                 need[i][j]=prime[idx]-ara[i][j];
             }
             row[i]+=need[i][j];
             col[j]+=need[i][j];
         }
      }
      cout<<min(*min_element(row,row+n),*min_element(col,col+m));
   return 0;
}