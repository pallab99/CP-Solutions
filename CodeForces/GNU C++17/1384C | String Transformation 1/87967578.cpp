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
struct DSU
{
 
    vector<int> parent;
    int N;
    DSU(int n)
    {
        //parent.resize(n+1);
        N=n;
        parent.assign(n+1,0);
    }
    inline void init(int n)
    {
        for (int i = 0; i <=n; i++)
            parent[i] = i;
    }
    inline int Find(int u)
    {
        if (u == parent[u])
            return u;
        return parent[u] = Find(parent[u]);
    }
    inline int Union(int u, int v)
    {
        int p = Find(u);
        int q = Find(v);
        if (p != q)
        {
            parent[p] = q;
            return 1;
        }
        return 0;
        
    }
};
int main()
{
   _00_
   inout();
    test
    {
        DSU d(30);
        string s,s1;
        int n,ans=0;
        cin>>n;
        cin>>s>>s1;
        d.init(26);
        bool flag=true;
        for(int i=0;i<n;i++)
        {
           if(s[i]>s1[i])
           {
               flag=false;
               break;
           }
        }
        if(!flag)
        {
        cout<<-1<<nn;
        continue;
        }
            for(int i=0;i<n;i++)
            {
                if(s[i]<s1[i])
                {
                    int u=s[i]-'a';
                    int v=s1[i]-'a';
                    if(d.Union(u,v))
                       ans++;
                }
            }
            cout<<ans<<nn;
    }
 return 0;
}