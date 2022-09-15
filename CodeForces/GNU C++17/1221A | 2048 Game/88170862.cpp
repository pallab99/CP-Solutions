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
#define        deb(a)       cerr<<" # "<<#a<<" -> "<<a<<nn;
#define        test         int t,tc; cin>>t; for( tc = 1;tc <= t;tc++)
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//=============Functions===============//
ll To_int(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string To_string(ll x) {stringstream ss; ss << x; string str = ss.str(); return str;}
template<typename T>T gcd(T a,T b) {if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template<typename T>T lcm(T a,T b) {if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
void inout()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
    #endif
}
int ara[102];
bool issubsetsumsum(int n, int sum) 
{ 
 bool dp[n + 1][sum + 1]; 
 for (int i = 0; i <= n; i++) 
  dp[i][0] = true; 
 for (int i = 1; i <= sum; i++) 
  dp[0][i] = false; 
 for (int i = 1; i <= n; i++) 
    { 
  for (int j = 1; j <= sum; j++)
        { 
   if (j < ara[i - 1]) 
    dp[i][j] = dp[i - 1][j]; 
   if (j >= ara[i - 1]) 
    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - ara[i - 1]]; 
  } 
 } 
 return dp[n][sum]; 
} 
 
int main()
{
   _00_
   //inout();
    test
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        cin>>ara[i];
        if(issubsetsumsum(n,2048))
        yes
        else 
        no
    }
   return 0;
}