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
void func(int n,vector<int>&vec)
{
     int cost=n,x=vec.size()-1;
        bool dp[x+1][cost+1];
        memset(dp,0,sizeof dp);
        for(ll i=0;i<=x;i++) 
        dp[i][0]=1;
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=cost;j++)
            {
                  dp[i][j]=dp[i-1][j];
    if(vec[i]<=j) dp[i][j]|=dp[i-1][j-vec[i]]; 
            }
        }
        if(dp[x][cost])
        yes
        else 
        no
}
int main()
{
   _00_
   //inout();
    test
    {
        int n;
        cin>>n;
        vector<int>vec;
        vec.push_back(0);
        int idx[2*n+1];
        for(int i=1;i<=2*n;i++)
        {
            int x;
            cin>>x;
            idx[x]=i;
        }
        int mx=2*n;
        for(int i=2*n;i>=1;i--)
        {
            if(idx[i]<=mx)
            {
                vec.push_back(mx-idx[i]+1);
                mx=idx[i]-1;
            }
        }
        func(n,vec);
    }
 return 0;
}