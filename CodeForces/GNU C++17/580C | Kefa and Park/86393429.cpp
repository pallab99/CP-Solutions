///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
using ull= unsigned long long;
using pll= pair<ll,ll>;
using pii= pair<int,int>;
//-----------Typedefine-------------//
#define        nn           "\n"
#define        sp           " "
#define        F            first
#define        S            second
#define        OO           (1<<30)
#define        pi           acos(-1.0)
#define        no           cout<<"NO"<<endl;
#define        yes          cout<<"YES"<<endl;
#define        FOR(n)       for(int i=0;i<n;i++)
#define        all(x)       (x).begin(),(x).end()
#define        FORR(n)      for(int i=n-1;i>=0;i--)
#define        deb(a)       cout<<" # "<<#a<<" -> "<<a<<endl;
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//---------------Function---------------//
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
int n,m;
int cat[200020];
vector<int>G[200020];
bitset<200020>vis;
int ans=0;
void dfs(int src,int cnt)
{
    vis[src]=1;
    if(cat[src])
    cnt++;
    if(cnt>m)
    return;
    if(!cat[src])
    cnt=0;
    for(auto child:G[src])
    {
        if(!vis[child])
        dfs(child,cnt);
    }
    if(G[src].size()==1 and src!=1)
    ans++;
    return;
}
int main()
{
   _00_
  // inout();
      cin>>n>>m;
     for(int i=1;i<=n;i++)
      {
          cin>>cat[i];
      }
      for(int i=1;i<=n-1;i++)
      {
          int u,v;
          cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
      }
     vis.reset();
     dfs(1,0);
     cout<<ans;
 return 0;
}