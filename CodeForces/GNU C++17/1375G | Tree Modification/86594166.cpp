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
#define        OO           (1<<30)
#define        pi           acos(-1.0)
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
vector<ll>G[200200];
ll n;
void bfs(ll src=1)
{
   ll odd=1,even=0;
    ll dis[n+1];
 memset(dis,0,sizeof(dis));
    queue<ll> q;
 q.push(src);
 dis[src]=1;
 while(!q.empty())
    {
  ll u=q.front();
  q.pop();
  for(auto v:G[u])
        {
   if(!dis[v])
            {
    q.push(v);
    dis[v]=dis[u]+1;
    if(dis[v]%2) odd++;
    else even++;
   }
  }
 }
 
 cout<<min(odd,even)-1<<endl;
}
int main()
{
   _00_
   inout();
 cin>>n;
 
 for(ll i=1;i<n;i++)
    {
  ll u,v;
  cin>>u>>v;
  G[u].push_back(v);
  G[v].push_back(u);
 }
   bfs();
 
 return 0;
}