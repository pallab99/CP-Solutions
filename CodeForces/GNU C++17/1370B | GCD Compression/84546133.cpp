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
#define     pb           emplace_back
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
void solve()
{
     test
     {
         queue<int>odd,even;
         int n;
         cin>>n;
         for(int i=1;i<=n*2;i++)
         {
             int a;
             cin>>a;
             if(a&1)
             odd.push(i);
             else 
             even.push(i);
         }
         for(int i=1;i<=n-1;i++)
         {
            int a,b;
            if(odd.size()>=2)
            {
                a=odd.front();
                odd.pop();
                b=odd.front();
                odd.pop();
            }
            else 
            {
                a=even.front();
                even.pop();
                b=even.front();
                even.pop();
            }
            cout<<a<<sp<<b<<nn;
         }
 
     }
}
int main()
{
 _00_
 //#ifndef ONLINE_JUDGE
        //freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
   // #endif
 solve();
 return 0;
}