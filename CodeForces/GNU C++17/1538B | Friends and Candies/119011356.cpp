#include<bits/stdc++.h>
using namespace std;
using ll  = long long int;
using vll = vector<ll>;
using vii = vector<int>;
using pll = pair<ll, ll>;
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
#define        deb(a)       cerr<<"Line "<<__LINE__<<" # "<<#a<<" -> "<<a<<nn;
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//=============Functions===============//
ll To_int(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
template<typename T>T gcd(T a, T b) {if (a < 0)return gcd(-a, b); if (b < 0)return gcd(a, -b); return (b == 0) ? a : gcd(b, a % b);}
template<typename T>T lcm(T a, T b) {if (a < 0)return lcm(-a, b); if (b < 0)return lcm(a, -b); return a * (b / gcd(a, b));}
void input()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 //freopen("output.txt", "w", stdout);
#endif
}
 
int main()
{
 _00_
 //input();
 test
 {
  ll n, sum = 0, c = 0, x, cnt = 0;
  cin >> n;
  ll a[n];
        vll b;
  for (ll i = 0; i < n; i++)
  {
   cin >> a[i];
  }
  for (ll i = 0; i < n - 1; i++)
  {
   if (a[i] == a[i + 1])
   {
    c++;
   }
  }
  for (ll i = 0; i < n; i++)
   b.push_back(a[i]);
 
  sort(all(b));
  for (ll i = 0; i < n; i++)
   sum += b[i];
  if (sum % n == 0)
  {
   x = sum / n;
   for (ll i = 0; i < n; i++)
   {
    if (a[i] > x)
    {
     cnt++;
    }
   }
   if (n == 1 or c == n - 1)
   {
    cout << "0" << endl;
   }
   else
   {
    cout << cnt << endl;
   }
  }
  else
   cout << "-1" << endl;
 }
 return 0;
}