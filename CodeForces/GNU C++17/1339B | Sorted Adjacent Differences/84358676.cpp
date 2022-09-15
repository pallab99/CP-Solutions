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
#define     nn           "\n"
#define     sp           " "
#define     F            first
#define     S            second
#define     OO           (1<<30)
#define     pi           acos(-1.0)
#define     oono         cout<<"NO"<<endl;
#define     haha         cout<<"YES"<<endl;
#define     all(x)       (x).begin(),(x).end()
#define     test         int t;cin>>t;while(t--)
#define     _00_         ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
///-------------------Function---------------------///
ll To_int(string str){stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string To_string(ll x){stringstream ss; ss << x; string str = ss.str(); return str;}
bool vowel_up(char c){return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool vowel_low(char c){return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
template<typename T>T lcm(T a,T b){ if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
template<typename T>T gcd(T a,T b){ if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
///-------------------Debug-----------------------///
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' ');stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{cerr << *it << " --> " << a << endl;err(++it, args...);}
///-----------------Main code---------------------///
vector<pii>vp;
int arr[sz];
void solve()
{
     test
     {
         vp.clear();
          int n;
          cin>>n;
          for(int i=1;i<=n;i++)
          cin>>arr[i];
 
          sort(arr+1,arr+n+1);
          if(n&1)
          cout<<arr[n/2+1]<<sp;
          for(int i=n/2;i>=1;i--)
          {
              int x=arr[i];
              int y=arr[n-i+1];
              vp.emplace_back(x,y);
          }
          for(auto i:vp)
          cout<<i.F<<sp<<i.S<<sp;
          cout<<nn;
     }
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