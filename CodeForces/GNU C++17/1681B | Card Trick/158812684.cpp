/*
                            ॐ नमो नारायणाय
 
                            ॐ हरे कृष्ण
 
                            ॐ नमः शिवाय
 
 
*/
 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
using vll = vector<ll>;
using vii = vector<int>;
using pll = pair<ll, ll>;
using ll  = long long int;
using pii = pair<int, int>;
using ull = unsigned long long int;
//=============Typedefines=============//
#define        nn           "\n"
#define        F            first
#define        S            second
#define        pi           acos(-1.0)
#define        MOD          1000000007
#define        inf          1<<30 //2^30
#define        no           cout<<"NO"<<nn;
#define        yes          cout<<"YES"<<nn;
#define        all(x)       (x).begin(),(x).end()
#define        test         int t, tc; cin>>t; for( tc = 1;tc <= t ; tc++)
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//=============Functions===============//
ll To_int(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
template<typename T>T gcd(T a, T b) {if (a < 0)return gcd(-a, b); if (b < 0)return gcd(a, -b); return (b == 0) ? a : gcd(b, a % b);}
template<typename T>T lcm(T a, T b) {if (a < 0)return lcm(-a, b); if (b < 0)return lcm(a, -b); return a * (b / gcd(a, b));}
// ====================DEBUG SECTION===================//                     
#define debug(a)cerr << "Line " << __LINE__ << " ## " << #a << " -->> ";_print(a);cerr << endl;
void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(ld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }
 
template <class T>
void _print(vector<T> vec)
{
  cerr << "["
       << " ";
  for (T i : vec)
  {
    cout << i << " ";
  }
  cerr << "]" << endl;
}
template <class T, class V>
void _print(map<T, V> v)
{
  cerr << "["
       << " ";
  for (auto i : v)
  {
    cout << i << " ";
  }
  cerr << "]";
}
template <class T, class V>
void _print(pair<T, V> p)
{
  cerr << "{";
  _print(p.ff);
  cerr << ",";
  _print(p.ss);
  cerr << "}";
}
template <class T>
void _print(set<T> s)
{
  cerr << "["
       << " ";
  for (T i : s)
  {
    cout << i << " ";
  }
  cerr << "]" << endl;
}
const int d4i[4]={-1, 0, 1, 0}, d4j[4]={0, 1, 0, -1};
const int d8i[8]={-1, -1, 0, 1, 1, 1, 0, -1}, d8j[8]={0, 1, 1, 1, 0, -1, -1, -1};
void input()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
int main()
{
    _00_
    //input();
    test
    {
        ll n;
        cin>>n;
        vll ara(n);
        for(int i=0;i<n;i++)
        cin>>ara[i];
 
        ll m;
        cin>>m;
        vll ara1(m);
         for(int i=0;i<m;i++)
        cin>>ara1[i];
 
        cout<<ara[(accumulate(all(ara1),0LL))%n]<<nn;
 
    }
    return 0;
}