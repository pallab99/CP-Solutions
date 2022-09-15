///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
using ull= unsigned long long;
using pll= pair<ll,ll>;
using pii= pair<int,int>;
//=============Typedefines=============//
#define        nn           "\n"
#define        sp           " "
#define        F            first
#define        S            second
#define        pi           acos(-1.0)
#define        inf          1<<30 //2^30
#define        no           cout<<"NO"<<endl;
#define        yes          cout<<"YES"<<endl;
#define        all(x)       (x).begin(),(x).end()
#define        deb(a)       cout<<" # "<<#a<<" -> "<<a<<endl;
#define        test         int t;cin>>t;for(int tc=1;tc<=t;tc++)
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//=============Functions===============//
ll To_int(string str){stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string To_string(ll x){stringstream ss; ss << x; string str = ss.str(); return str;}
template<typename T>T gcd(T a,T b){if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template<typename T>T lcm(T a,T b){if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
void inout()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
    #endif
}
vector<int>tree[300010];
bitset<300010>vis;
ll cnt;
void dfs(int v,int k,bool flag)
{
    vis[v]=1;
    if(k==v)
    flag=1;
    if(flag)
    cnt++;
    for(auto child:tree[v])
    {
        if(!vis[child])
        dfs(child, k, flag);
    }
}
int main()
{
   _00_
   //inout();
      int n,x,y;
      cin>>n>>x>>y;
      for(int i=0;i<n-1;i++)
      {
          int u,v;
          cin>>u>>v;
          tree[u].push_back(v);
          tree[v].push_back(u);
      }
      ll cnt1=0,cnt2=0;
      vis.reset();
      dfs(x,y,0);
      cnt1=cnt;
      vis.reset();
      cnt=0;
      dfs(y,x,0);
      cnt2=cnt;
      cout<<1LL*n*(n-1)-(cnt1*cnt2);
 return 0;
}