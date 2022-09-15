///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
using ull= unsigned long long;
using pll= pair<ll,ll>;
using pii= pair<int,int>;
const int sz= 200000;
 
#define        nn           "\n"
#define        sp           " "
#define        F            first
#define        S            second
#define        OO           (1<<30)
#define        mod          1000000007
#define        pi           acos(-1.0)
#define        PB           emplace_back
#define        no           cout<<"NO"<<endl;
#define        yes          cout<<"YES"<<endl;
#define        all(x)       (x).begin(),(x).end()
#define        test         int t;cin>>t;while(t--)
#define        deb(a)       cout<<" # "<<#a<<" -> "<<a<<endl;
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
class Function
{
  public:
ll To_int(string str){stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string To_string(ll x){stringstream ss; ss << x; string str = ss.str(); return str;}
bool vowel_up(char c){return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool vowel_low(char c){return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
template<typename T>T lcm(T a,T b){if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
template<typename T>T gcd(T a,T b){if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
};
 
void inout()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
    #endif
}
struct FenwickTree
{
 int N;
 vector<int> tree;
 
 void init(int n)
 {
  N = n;
  tree.assign(n + 1, 0);
 }
 
 void update(int idx, int val)
 {
  while (idx <= N)
  {
   tree[idx] += val;
   idx += idx & -idx;
  }
 }
 
 void updateMax(int idx, int val)
 {
  while (idx <= N)
  {
   tree[idx] = max(tree[idx], val);
   idx += idx & -idx;
  }
 }
 
 int pref(int idx)
 {
  int ans = 0;
  while (idx > 0)
  {
   ans += tree[idx];
   idx -= idx & -idx;
  }
  return ans;
 }
 
 int rsum(int l, int r)
 {
  return pref(r) - pref(l - 1);
 }
 
 int prefMax(int idx)
 {
  int ans = -2e9;
  while (idx > 0)
  {
   ans = max(ans, tree[idx]);
   idx -= idx & -idx;
  }
  return ans;
 }
};
 
int main()
{
  _00_
    //inout();
 int n, q; cin >> n >> q;
 
 FenwickTree bit;
 bit.init(n);
 
 for (int i = 0; i < n; ++i)
 {
  int x; cin >> x;
  bit.update(x, 1);
 }
 
 while (q--)
 {
  int k; cin >> k;
  if (k >= 1)
   bit.update(k, 1);
  else
  {
   k = -k;
 
   int beg = 1, end = n;
   int ans;
 
   while (beg <= end)
   {
    int mid = (beg + end) / 2;
 
    int cur_pref = bit.pref(mid);
 
    if (cur_pref >= k)
     ans = mid, end = mid - 1;
 
    else
     beg = mid + 1;
   }
 
   bit.update(ans, -1);
  }
 }
 
 int ans = 0;
 
 for (int i = 1; i <= n; ++i)
  if (bit.pref(i))
  {
   ans = i;
   break;
  }
 cout << ans;
 return 0;
}