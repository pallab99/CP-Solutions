///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
///-------------------Typedefine---------------------///
using ll= long long;
using ull= unsigned long long;
using vll= vector<ll>;
using mll= map<ll,ll>;
using pll= pair<ll,ll>;
using vii= vector<int>;
using mii= map<int,int>;
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
#define     done         cerr << "Done!" << '\n'
#define     all(x)       (x).begin(),(x).end()
#define     test         int t;cin>>t;while(t--)
#define     in           freopen("input.txt","r",stdin)
#define     out          freopen("output.txt","w",stdout)
#define     deb(a)       cout<<" # "<<#a<<" -> "<<a<<endl;
#define     deb2(x,y)    cout <<(#x)<<" -> "<<(x)<<" and "<<(#y)<<" -> "<<(y)<<nn
#define     _00_         ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
///-------------------Function---------------------///
ll To_int(string str){stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string To_string(ll x){stringstream ss; ss << x; string str = ss.str(); return str;}
bool vowel_up(char c){return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool vowel_low(char c){return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
template<typename T>T lcm(T a,T b){ if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
template<typename T>T gcd(T a,T b){ if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
///-----------------Main code---------------------///
void solve()
{
     ll k;
     cin>>k;
     map<int,int>hash;
     for(int i=0;i<11;i++)
     hash[i]=1;
     
     string s="codeforces";
     ll mul=1;
     bool flag=false;
     while(mul<k)
     {
         for(int i=0;i<10;i++)
         {
             hash[i]++;
             mul=mul/(hash[i]-1);
             mul=mul*hash[i];
            if(mul>=k)
            {
                flag=true;
                break;
            }
         }
         if(flag)
         break;
     }
     for(int i=0;i<10;i++)
     {
         while(hash[i]>0)
         {
             cout<<s[i];
             hash[i]--;
         }
     }
 
}
int32_t main()
{
 _00_
 //#ifndef ONLINE_JUDGE
      // in;
    //#endif
 solve();
 return 0;
}