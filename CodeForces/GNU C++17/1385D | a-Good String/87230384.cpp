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
//#define        deb(a)       cerr<<" # "<<#a<<" -> "<<a<<nn;
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
string s;
int solve(int l,int r,char ch)
{
     if(l==r)
     {
         if(s[l]==ch)
         return 0;
         return 1;
     }
     int cnt=0,cnt1=0;
     for(ll i=l;i<=(l+r)/2;i++) 
     if(s[i]!=ch) 
     cnt++;
     int ans1=solve((l+r)/2+1,r,ch+1);
     for(int i=(l+r)/2+1;i<=r;i++)
     {
            if(s[i]!=ch)
         cnt1++;
     }
     int ans2=solve(l,(l+r)/2,ch+1);
     int result=min(cnt+ans1,cnt1+ans2);
     return result;
}
int main()
{
   _00_
   inout();
      test
      {
          s.clear();
          int n;
          cin>>n;
          cin>>s;
          cout<<solve(0,n-1,'a')<<nn;
      }
 return 0;
}