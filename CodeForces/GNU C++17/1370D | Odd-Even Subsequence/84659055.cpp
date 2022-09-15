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
 int n,k;
 int ara[sz+10];
 bool isvalidodd(int mid)
 {
     int cnt=0;
     for(int i=1;i<=n;i++)
     {
         if(cnt%2==0)
         cnt++;
         else if(ara[i]<=mid)
         cnt++;
     }
     return cnt>=k;
 }
 bool isvalideven(int mid)
 {
     int cnt=0;
     for(int i=1;i<=n;i++)
    {
         if(cnt%2!=0)
         cnt++;
         else if(ara[i]<=mid)
         cnt++;
    }
     return cnt>=k;
 }
 int Binary_Search(int l,int h)
 {
      int ans=h;
      while(l<=h)
      {
          int mid=(l+h)>>1;
          if(isvalideven(mid) or isvalidodd(mid))
          {
              ans=mid;
              h=mid-1;
          }
          else 
          l=mid+1;
      }
      return ans;
 }
void solve()
{
    
     cin>>n>>k;
     int mx=-OO;
    for(int i=1;i<=n;i++)
    {
        cin>>ara[i];
        mx=max(mx,ara[i]);
    }
    //deb(mx);
    cout<<Binary_Search(1,mx);
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