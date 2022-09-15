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
vector<int>G[200020];
vector<pii>ans;
bitset<200020>vis;
int n,m;
void bfs(int src)
{
    queue<int>q;
    vis[src]=1;
    q.push(src);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto child:G[u])
        {
            if(!vis[child])
            {
                vis[child]=1;
                q.push(child);
                ans.push_back(make_pair(u,child));
            }
        }
    }
}
int main()
{
   _00_
   inout();
      cin>>n>>m;
      while(m--)
      {
          int u,v;
          cin>>u>>v;
          G[u].push_back(v);
          G[v].push_back(u);
      }
      vis.reset();
      int maxDegree = 0 , maxNode = -1;;
      for(int i=1;i<=n;i++)
      {
      if(G[i].size() > maxDegree)
    maxDegree = G[i].size() , maxNode = i;
      }
      //deb(mx);
      bfs(maxNode);
      for(auto i:ans)
      cout<<i.F<<sp<<i.S<<nn;
 return 0;
}