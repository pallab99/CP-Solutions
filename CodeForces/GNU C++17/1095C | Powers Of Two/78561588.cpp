///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
/*
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
typedef tree <
int,
null_type ,
less < int > ,
rb_tree_tag ,
tree_order_statistics_node_update >
ordered_set ;
*st.find_by_order(k) ; kth element
st.order_of_key(k) ; number of element less than k
*/
///-------------------Typedefine---------------------///
///abcdefghijklmnopqrstuvwxyz
///ABCDEFGHIJKLMNOPQRSTUVWXYZ
//N =floor(log10(N)) + 1 find number of digit in a integer
//all_of(ar, ar+6, [](int x) { return x>0; }) Checking if all elements are positive
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> v;
typedef map<ll, ll> mm;
typedef map<string, ll> mp;
typedef pair<ll, ll> pii;
const ll MOD = 1<<30;//1073741824
const ll N   = 200000;
#define     nn         "\n"
#define     sp         " "
#define     pb         push_back
#define     SS(v)      v.size()
#define     inf        1<<28
#define     ff         first
#define     ss         second
#define     pi         acos(-1.0)
#define     CLR(a)     memset(a,0,sizeof(a))
#define     SET(a)     memset(a,-1,sizeof(a))
#define     all(x)     (x).begin(), (x).end()
#define     haha       cout<< "YES" <<endl;
#define     oono       cout<< "NO" <<endl;
#define     deb(x)     cout << #x << " " << x << endl;
#define   Precision(a) cout << fixed << setprecision(a)
#define     pd         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>
///-------------------functions----------------------///
bool is_vowel_up(char c) {return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool is_vowel_low(char c) {return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
ll Strtoll(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string llostr(ll x) {stringstream ss; ss << x; string str = ss.str(); return str;}
template <typename T> T add(T a, T b) { return a + b >= MOD ? a + b - MOD : a + b;}
template <typename T> T sub(T a, T b) { return a - b < 0 ? a - b + MOD : a - b;}
template <typename T> T mul(T a, T b) { return (a * 1LL * b) % MOD;}
template <typename T> T gcd(T a, T b) { return b ? gcd (b, a % b) : a;}
template <typename T> T lcm(T a, T b) { return a / gcd (a, b) * b;}
int substr_cnt(string s, string p) {
 int i, ans = 0, len = SS(p); for (int i = 0; i < SS(s) - len + 1; i++)
 {if (p == s.substr(i, len))ans++;} return ans;
}
int dx[] = {0, 0, -1, 1}; // right , left , forward , backward
int dy[] = {1, -1, 0, 0};
int fx[] = {1, 1, 1, 0, -1, -1, -1, 0};
int fy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
//bool valid(int x , int y) {
//    if(x <= n && y <= m && x >= 1 && y >= 1)
//        return true ;
//      return false ;
//}
///-----------------Main code---------------------///
void file()
{
#ifndef ONLINE_JUDGE
 //freopen("input.txt", "r", stdin);
 //freopen("output.txt", "w", stdout);
#endif
 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
}
void power_of_two(ll n,ll k)
{
   ll res[k];
   fill(res,res+k,1);
   ll sum=k;
   for(int i=k-1;i>=0;i--)
   {
       while(sum+res[i]<=n)
       {
           sum+=res[i];
           res[i]*=2;
       }
   }
     if(sum!=n)
      cout<<"NO";
      else
      {
      cout<<"YES"<<nn;
      for(int i=0;i<k;i++)
      cout<<res[i]<<sp;
      }
      
     
}
int main()
{
 file();
 ll n,k;
    cin>>n>>k;
    power_of_two(n,k);
 return 0;
}
 