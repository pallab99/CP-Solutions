///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
///-------------------Typedefine---------------------///
using ll= long long;
using ull= unsigned long long;
using pll= pair<ll,ll>;
using pii= pair<int,int>;
const ll sz= 2000000;
#define        nn           "\n"
#define        sp           " "
#define        mod          1000000007
#define        F            first
#define        S            second
#define        OO           (1<<30)
#define        pi           acos(-1.0)
#define        PB           emplace_back
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
void inout()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
    #endif
}
ll dp[sz+10];
void Precompute()
{
      dp[1]=dp[2]=0;
      dp[3]=dp[4]=1;
      for(ll i=5;i<=sz+10;i++)
      {
          if(i%3==0)
              dp[i]=(dp[i-1]+dp[i-2]*2+1)%mod;
          else 
              dp[i]=(dp[i-1]+dp[i-2]*2)%mod;
      }
      return;
}
int main()
{
 _00_
 inout();
    Precompute();
    test
    {
        ll n;
        cin>>n;
        cout<<(dp[n]*4)%mod<<nn;
    }
 return 0;
}