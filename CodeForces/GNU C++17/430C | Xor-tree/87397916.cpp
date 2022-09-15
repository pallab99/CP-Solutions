///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
using ll  = long long int;
using ull = unsigned long long int;
using vll = vector<ll>;
using vii = vector<int>;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
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
#define        deb(a)       cerr<<" # "<<#a<<" -> "<<a<<nn;
#define        test         int t,tc;cin>>t;for(tc=1;tc<=t;tc++)
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
vector<int>tree[100010];
vector<int>ans;
bool init[100010],goal[100010];
void dfs(int u,int par,int level,bool even,bool odd)
{
    if(level%2 and odd)
        init[u] ^= 1;
    
    if(level%2 == 0 and even)
        init[u] ^= 1;
    
    if(init[u] != goal[u]) 
    {
        init[u] ^= 1;
        ans.push_back(u);
        if(level%2)
            odd ^= 1;
        else
            even ^= 1;
    }
    for(auto i:tree[u])
    {
        if(par!=i)
        dfs(i,u,level+1,even,odd);
    }
}
int main()
{
   _00_
   //inout();
     int n;
     cin>>n;
     for(int i=1;i<=n-1;i++)
     {
         int u,v;
         cin>>u>>v;
         tree[u].push_back(v);
         tree[v].push_back(u);
     }
    for(int i=1;i<=n;i++)
    cin>>init[i];
    for(int i=1;i<=n;i++)
    cin>>goal[i];
    dfs(1,-1,0,0,0);
    cout<<ans.size()<<nn;
    for(auto i:ans)
    cout<<i<<nn;
 return 0;
}