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
vector<pii>ans;
int Parent[10000], Rank[10000];
void init(int n)
{
    for (int i = 1; i <= n; i++)
        Parent[i] = i, Rank[i] = 1;
}
int Find(int u)
{
    if (u == Parent[u])
        return u;
    return Parent[u] = Find(Parent[u]);
}
void Union(int u, int v)
{
    int p = Find(u);
    int q = Find(v);
    if(p!=q)
    {
        ans.push_back({u,v});
    if(Rank[p]<Rank[q])
    swap(p,q);
    Rank[p]+=Rank[q];
    Parent[q]=p;
    }
}
int main()
{
   _00_
   //input();
      test
      {
          ans.clear();
          map<int,int>mp;
          int n;
          cin>>n;
          int ara[n+5];
          for(int i=1;i<=n;i++)
          {
              cin>>ara[i];
              mp[ara[i]]++;
          }
          if(mp.size()==1)
          {
              no
              continue;
          }
         init(n);
         for(int i=1;i<=n;i++)
         {
             for(int j=1;j<=n;j++)
             {
                 if(ara[i]!=ara[j])
                 Union(i,j);
             }
         }
         yes
         for(auto it:ans)
         cout<<it.F<<' '<<it.S<<nn;
      }
   return 0;
}