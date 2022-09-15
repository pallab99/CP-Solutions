///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
///-------------------Typedefine---------------------///
typedef long long ll;
typedef vector<ll> v;
typedef map<ll,ll> mm;
typedef map<string,ll> mp;
typedef pair<ll,ll> pii;
const ll MOD = 1000000007;
const ll N   = 200000;
///-------------------functions----------------------///
bool is_vowel_up(char c)
{
    return c=='A'|c=='E'||c=='I'||c=='U'||c=='O'||c=='Y';
}
bool is_vowel_low(char c)
{
    return c=='a'||c =='e'||c=='i'||c=='u'||c=='o'||c=='y';
}
int fx[]= {1,1,1,0,-1,-1,-1,0},fy[]= {-1,0,1,1,1,0,-1,-1};
ll Strtoll(string str)
{
    stringstream ss(str);
    ll x = 0;
    ss >> x ;
    return x ;
}
string llostr(ll x)
{
    stringstream ss;
    ss << x;
    string str = ss.str();
    return str;
}
template <typename T> T add(T a,T b)
{
    return a + b >= MOD ? a + b - MOD : a + b;
}
template <typename T> T sub(T a,T b)
{
    return a - b < 0 ? a - b + MOD : a - b;
}
template <typename T> T mul(T a,T b)
{
    return (a * 1LL * b) % MOD;
}
template <typename T> T gcd(T a,T b)
{
    return b ? gcd (b,a%b): a;
}
template <typename T> T lcm(T a,T b)
{
    return a / gcd (a,b) * b;
}
#define     nn           "\n"
#define     ss           " "
#define     pb           push_back
#define     SS(v)        v.size()
#define     pi           acos(-1.0)
#define     CLR(a)       memset(a,0,sizeof(a))
#define     SET(a)       memset(a,-1,sizeof(a))
#define     all(x)       (x).begin(), (x).end()
#define     haha         cout<< "YES" <<endl;
#define     oono         cout<< "NO" <<endl;
#define     INF9         2147483647
#define     INF18        9223372036854775807
#define     deb(x)       cout << #x << " " << x << endl;
#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
int main()
{
    _0_;
    //freopen("input.txt","r" ,stdin);
    int t;
    cin>>t;
 
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        string tmp=a;
 
        sort(tmp.begin(),tmp.end());
        bool flag=0;
        int n=a.size();
        if(a<b)
            flag=1;
 
        for(int i=0; i<n ; i++)
        {
            if(!flag)
            {
                if(a[i]>tmp[i])
                {
                    for(int j=i+1; j<n; j++)
                    {
                        swap(a[i],a[j]);
                        if(a<b)
                        {
                            flag=1;
                            break;
                        }
                        swap(a[i],a[j]);
                    }
                }
            }
 
        }
 
        if(flag)
            cout<<a<<nn;
        else
            cout<<"---"<<nn;
    }
    return 0;
}
 