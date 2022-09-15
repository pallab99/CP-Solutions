///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
///-------------------Typedefine---------------------///
using ll= long long;
using ull= unsigned long long;
using pll= pair<ll,ll>;
using pii= pair<int,int>;
const int sz= 200000;
const ll MOD=1000000007;
#define        nn           "\n"
#define        sp           " "
#define        F            first
#define        S            second
#define        OO           (1<<30)
#define        pi           acos(-1.0)
#define        pb           emplace_back
#define        no           cout<<"NO"<<endl;
#define        yes          cout<<"YES"<<endl;
#define        all(x)       (x).begin(),(x).end()
#define        test         int t;cin>>t;while(t--)
#define        deb(a)       cout<<" # "<<#a<<" -> "<<a<<endl;
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
///-------------------Function---------------------///
ll To_int(string str){stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string To_string(ll x){stringstream ss; ss << x; string str = ss.str(); return str;}
bool vowel_up(char c){return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool vowel_low(char c){return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
template<typename T>T lcm(T a,T b){ if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
template<typename T>T gcd(T a,T b){ if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
///-----------------Main code---------------------///
ll ara[sz+10],sum[sz+10];
void solve()
{
     ll n,m;
     cin>>n>>m;
      for(int i=1;i<=n;i++)
      cin>>ara[i];
      partial_sum(ara+1,ara+n+1,sum+1);
          vector<pll>vp;
      while (m--)
      {
          ll val;
          cin>>val;
          ll l=1,h=n,dor;
          while (l<=h)
          {
               ll mid=(l+h)>>1;
               if(sum[mid]<val)
               l=mid+1;
               else if(sum[mid]>=val)
               {
                   h=mid-1;
                   dor=mid;
               }
          }
        vp.pb(dor,val-sum[dor-1]);
          
      }
      for(auto i:vp)
      cout<<i.F<<sp<<i.S<<nn;
      
}
int main()
{
 _00_
 //#ifndef ONLINE_JUDGE
        //freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
    //#endif
 solve();
 return 0;
}