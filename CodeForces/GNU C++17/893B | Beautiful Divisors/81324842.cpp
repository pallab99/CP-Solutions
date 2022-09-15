///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
///-------------------Typedefine---------------------///
///abcdefghijklmnopqrstuvwxyz
///ABCDEFGHIJKLMNOPQRSTUVWXYZ
///priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>
using ll=long long;
using ull=unsigned long long int;
using vll=vector<ll>;
using mll=map<ll,ll>;
using pll=pair<ll,ll>;
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
#define     deb(x)     cout << #x << " " << x << endl;
#define   Precision(a) cout << fixed << setprecision(a)
#define     test(t)    cin>>t;while(t--)
#define     FasterIO   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
///-------------------functions----------------------///
bool is_vowel_up(char c)  {return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool is_vowel_low(char c) {return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
ll Strtoll(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string llostr(ll x) {stringstream ss; ss << x; string str = ss.str(); return str;}
template <typename T> T gcd(T a,T b) { if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template <typename T> T lcm(T a,T b) { if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
//int dx[] = {0, 0, -1, 1}; // right , left , forward , backward
//int dy[] = {1, -1, 0, 0};
//int dx[] = {1, 1, 1, 0, -1, -1, -1, 0}; diagonal moves
//int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
//int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2}; //knight moves
//int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1}; //knight moves
/*bool isvalid(int x,int y)
{if(x<1 || x>n || y<1 || y>m) return false; if(vis[x][y]==true)  return false;  return true;}*/
///-----------------Main code---------------------///
bool prime(int n)
{
    if(n==0)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    int sq=sqrt(n);
    for(int i=3; i<=sq; i+=2)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
 FasterIO
    int ar[10];
    ar[7] = 32640;
    ar[6] = 8128;
    ar[5] = 2016;
    ar[4] = 496;
    ar[3] = 120;
    ar[2] = 28;
    ar[1] = 6;
    ar[0] = 1;
    ll n;
    cin>>n;
    if(prime(n))
    return cout<<1,0;
    bool flag=0;
    ll ans;
    for(int i=7;i>=0;i--)
    {
        if(n%ar[i]==0)
        {
            cout<<ar[i];
            break;
        }
    }
    
 return 0;
}
 