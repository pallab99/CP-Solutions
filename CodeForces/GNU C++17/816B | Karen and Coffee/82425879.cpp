///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
namespace Basic
{
using ll=long long;
using ull=unsigned long long ;
using vll=vector<ll>;
using mll=map<ll,ll>;
using pll=pair<ll,ll>;
using vii=vector<int>;
using mii=map<int,int>;
using pii=pair<int,int>;
const ll N = 200000;
#define     nn         "\n"
#define     sp         " "
#define     pb         push_back
#define     inf        1000000000
#define     ff         first
#define     ss         second
#define     pi         acos(-1.0)
#define     Fin        freopen("input.txt","r",stdin)
#define     Fout       freopen("output.txt","w",stdout)
#define     all(x)     (x).begin(), (x).end()
#define     haha       cout<< "YES" <<endl;
#define     oono       cout<< "NO" <<endl;
#define   Precision(a) cout << fixed << setprecision(a)
#define     test       ll t;cin>>t;while(t--) 
#define     deb(a)    cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;
#define     FasterIO   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}using namespace Basic;
namespace Function
{
bool is_vowel_up(char c)  {return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool is_vowel_low(char c) {return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
ll Strtoint(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string inttostr(ll x) {stringstream ss; ss << x; string str = ss.str(); return str;}
template <typename T> T gcd(T a,T b) { if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template <typename T> T lcm(T a,T b) { if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
}using namespace Function;
///-----------------Main code---------------------///
ll ara[N+2],sum[N+2],ans[N+2];
int main()
{
 FasterIO
    ll n,k,q;
    cin>>n>>k>>q;
    while(n--)
    {
        ll l,r;
        cin>>l>>r;
        ara[l]++;
        ara[r+1]--;
    }
    partial_sum(ara,ara+N+2,sum);
    for(int i=1;i<=N+2;i++)
    {
        if(sum[i]>=k)
        sum[i]=1;
        else 
        sum[i]=0;
    }
    partial_sum(sum,sum+N+2,ans);
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        cout<<ans[r]-ans[l-1]<<nn;
    }
 return 0;
}
 