///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
///-------------------Typedefine---------------------///
using ll=long long;
using ull=unsigned long long int;
#define     nn         "\n"
#define     sp         " "
#define     F         first
#define     S         second
#define     pi         acos(-1.0)
#define     in        freopen("input.txt","r",stdin)
#define     out       freopen("output.txt","w",stdout)
#define     all(x)     (x).begin(), (x).end()
#define     haha       cout<< "YES" <<endl;
#define     oono       cout<< "NO" <<endl;
#define     REP(a,n)   for(int i=a;i<n;i++)
#define     rep(b,n)   for(int i=b;i>0;i--)
#define     MEM(a,b)   memset(a,(b),sizeof(a))
#define   Precision(a) cout << fixed << setprecision(a)
#define     deb(a)     cout<<__LINE__<<" # "<<#a<<" -> "<<a<<endl;
#define     FasterIO   ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define     test       int t;cin>>t;while(t--)
///-------------------Function---------------------///
bool is_vowel_up(char c)  {return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool is_vowel_low(char c) {return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
inline ll Strtoint(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
inline string inttostr(ll x) {stringstream ss; ss << x; string str = ss.str(); return str;}
template <typename T> T gcd(T a,T b) { if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template <typename T> T lcm(T a,T b) { if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
///-----------------Main code---------------------///
int arr[200010];
vector<int>ans;
void solve()
{
    test
    {
        int n;
        cin>>n;
        REP(0,n)
        cin>>arr[i];
        ans.clear();
       REP(0,n)
        {
            if(i==0 or i==n-1 or arr[i-1]<arr[i]!=arr[i]<arr[i+1])
            
            ans.push_back(arr[i]);
        }
        cout<<ans.size()<<nn;
        for(auto i:ans)
        cout<<i<<sp;
 
        cout<<nn;
    }
}
int main()
{
 FasterIO
 solve();
 return 0;
}