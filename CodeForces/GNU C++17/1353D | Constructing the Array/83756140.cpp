///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
///-------------------Typedefine---------------------///
using ll=long long;
using ull=unsigned long long int;
using piii=pair<int,pair<int,int>>;
using pii=pair<int,int>;
#define     nn           "\n"
#define     sp           " "
#define     F            first
#define     S            second
#define     OO           (1<<30)
#define     pi           acos(-1.0)
#define     oono         cout<< "NO" <<endl;
#define     haha         cout<< "YES" <<endl;
#define     MEM(a,b)     memset(a,b,sizeof a)
#define     all(x)       (x).begin(),(x).end()
#define     test         int t;cin>>t;while(t--)
#define   Precision(a)   cout<<fixed<<setprecision(a)
#define     in           freopen("input.txt","r",stdin)
#define     out          freopen("output.txt","w",stdout)
#define     deb(a)       cout<<__LINE__<<" # "<<#a<<" -> "<<a<<endl;
#define     _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
///-------------------Function---------------------///
inline ll Strtoint(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
inline string inttostr(ll x) {stringstream ss; ss << x; string str = ss.str(); return str;}
bool is_vowel_up(char c)  {return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool is_vowel_low(char c) {return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
template <typename T> T lcm(T a,T b) { if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
template <typename T> T gcd(T a,T b) { if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
///-----------------Main code---------------------///
vector<int>v;
void solve()
{
    test
    {
       v.clear();
       int n,val=0;
       cin>>n;
       v.assign(n,0);
       priority_queue<piii>pq;
       pq.push(make_pair(n,make_pair(0,n-1)));
       while (!pq.empty())
       {
           int l=-1*pq.top().S.F;
           int r=pq.top().S.S;
           pq.pop();
           if (l > r) 
           continue;
           int mid = (r + l)>>1;
           v[mid]=++val;
           pq.push(make_pair(mid-l+1,make_pair(-1*l,mid-1)));
           pq.push(make_pair(r-mid+1,make_pair(-1*(mid+1),r)));
       }
       for(auto i:v)
       cout<<i<<sp;
       cout<<nn;
       
    }
}
int main()
{
 _00_
 //in;
 //out;
 solve();
 return 0;
}