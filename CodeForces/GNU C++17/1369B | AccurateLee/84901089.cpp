///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
///-------------------Typedefine---------------------///
using ll= long long;
using ull= unsigned long long;
using pll= pair<ll,ll>;
using pii= pair<int,int>;
const ll MOD=10e9+7;
const int sz= 200000;
#define        nn           "\n"
#define        sp           " "
#define        F            first
#define        S            second
#define        OO           (1<<30)
#define        pi           acos(-1.0)
#define        PB           emplace_back
#define        no           cout<<"NO"<<endl;
#define        yes          cout<<"YES"<<endl;
#define        all(x)       (x).begin(),(x).end()
#define        test         int t;cin>>t;while(t--)
#define        deb(a)       cout<<" # "<<#a<<" -> "<<a<<endl;
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
///-------------------Function---------------------///
ll To_int(string str){stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string To_string(ll x){stringstream ss; ss << x; string str = ss.str(); return str;}
bool vowel_up(char c){return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool vowel_low(char c){return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
template<typename T>T lcm(T a,T b){ if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
template<typename T>T gcd(T a,T b){ if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
///-----------------Main code---------------------///
void inout()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
    #endif
}
char s[200001];
int main()
{
 _00_
 inout();
      test
    {
          int n;
          cin>>n;
          int f=-OO,l=OO;
          for(int i=1;i<=n;i++)
          {
              cin>>s[i];
              if(s[i]=='0')
              l=i;
              else 
              {
                  if(f==-OO)
                  f=i;
              }
          }
          string beg="";
          string end="";
          for(int i=1;i<f;i++)
          beg.push_back(s[i]);
          for(int i=l+1;i<=n;i++)
          end.push_back(s[i]);
 
          if(beg.size()+end.size()==n)
          cout<<beg<<end<<nn;
          else if(f==-OO or l==OO)
             {
                 for(int i=1;i<=n;i++)
                 cout<<s[i];
                 cout<<nn;
             }
              else if(l<=n and f>=1)
                  cout<<beg<<'0'<<end<<nn;
    }
 return 0;
}