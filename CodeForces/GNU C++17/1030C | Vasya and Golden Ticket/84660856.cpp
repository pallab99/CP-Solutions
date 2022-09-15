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
#define      nn           "\n"
#define      sp           " "
#define      F            first
#define      S            second
#define      OO           (1<<30)
#define      pi           acos(-1.0)
#define      pb           emplace_back
#define      oono         cout<<"NO"<<endl;
#define      haha         cout<<"YES"<<endl;
#define      all(x)       (x).begin(),(x).end()
#define      test         int t;cin>>t;while(t--)
#define      deb(a)       cout<<" # "<<#a<<" -> "<<a<<endl;
#define      deb2(x,y)    cout <<(#x)<<" -> "<<(x)<<" and "<<(#y)<<" -> "<<(y)<<nn
#define      _00_         ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
///-------------------Function---------------------///
ll To_int(string str){stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string To_string(ll x){stringstream ss; ss << x; string str = ss.str(); return str;}
bool vowel_up(char c){return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool vowel_low(char c){return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
template<typename T>T lcm(T a,T b){ if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
template<typename T>T gcd(T a,T b){ if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
///-----------------Main code---------------------///
bool possible(int n,string s)
{
     int presum[n];
     presum[0]=s[0]-'0';
     for(int i=1;i<n;i++)
         presum[i]=presum[i-1]+(s[i]-'0');
    for(int i=1;i<=n-1;i++)
    {
        int sum=presum[i-1];
        int sum1=0;
        int it=i;
        bool flag=false;
        while(it<n)
        {
            sum1+=s[it]-'0';
            if(sum1==sum)
            {
                sum1=0;
               flag=true;
            }
            else if(sum1>sum)
            break;;
            it++;
        }
    if(sum1==0 and it==n and flag)
    return true;
    }
    return false;
}
void solve()
{
     int n;
     cin>>n;
     string s;
     cin>>s;
     if(possible(n,s))
     haha
     else
     oono
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