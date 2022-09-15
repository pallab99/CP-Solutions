///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
///-------------------Typedefine---------------------///
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
///-------------------Function---------------------///
class Function
{
  public:
ll To_int(string str){stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string To_string(ll x){stringstream ss; ss << x; string str = ss.str(); return str;}
bool vowel_up(char c){return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool vowel_low(char c){return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
template<typename T>T lcm(T a,T b){ if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
template<typename T>T gcd(T a,T b){ if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
};
///-----------------Main code---------------------///
void inout()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
    #endif
}
vector<ll>w;
vector<pll>ans;
int main()
{
   _00_
   inout();
      test
      {
          w.clear();
          ans.clear();
          int n,k;
          cin>>n>>k;
          priority_queue<ll>pq;
          for (int  i = 0; i<n; i++)
          {
              ll a;
              cin>>a;
              pq.push(a);
          }
          for(int i=0;i<k;i++)
          {
              int x;
              cin>>x;
              w.PB(x);
          }
          sort(all(w));
          for(int i=0;i<k;i++)
          {
              ans.PB(pq.top(),pq.top());
              pq.pop();
              w[i]--;
          }
        for(int i=0;i<k;i++)
          {
             while (w[i])
             {
                 ans[i].S=pq.top();
                 pq.pop();
                 w[i]--;
             }
             
          }
          ll sum=0LL;
         for(auto it:ans)
         sum+=it.F+it.S;
          cout<<sum<<nn;
      }
 return 0;
}