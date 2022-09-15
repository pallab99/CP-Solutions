///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
///-------------------Typedefine---------------------///
using ll=long long;
using ull=unsigned long long;
using vll=vector<ll>;
using mll=map<ll,ll>;
using pll=pair<ll,ll>;
using vii=vector<int>;
using mii=map<int,int>;
using pii=pair<int,int>;
#define     nn           "\n"
#define     sp           " "
#define     F            first
#define     S            second
#define     OO           (1<<30)
#define     pi           acos(-1.0)
#define     oono         cout<<"NO"<<endl;
#define     haha         cout<<"YES"<<endl;
#define     MEM(a,b)     memset(a,b,sizeof a)
#define     all(x)       (x).begin(),(x).end()
#define     test         int t;cin>>t;while(t--)
#define     in           freopen("input.txt","r",stdin);
#define     out          freopen("output.txt","w",stdout);
#define     err          freopen("error.txt","w",stderr);
#define     deb(a)       cout<<__LINE__<<" # "<<#a<<" -> "<<a<<endl;
#define     _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
///-------------------Function---------------------///
ll Strtoint(string str){stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string inttostr(ll x){stringstream ss; ss << x; string str = ss.str(); return str;}
bool vowel_up(char c){return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool vowel_low(char c){return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
template<typename T>T lcm(T a,T b){ if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
template<typename T>T gcd(T a,T b){ if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
///-----------------Main code---------------------///
int arr[100100];
void solve()
{
     test
     {
          int n;
          cin>>n;
          for(int i=1;i<=n;i++)
          {
            cin>>arr[i];
          }
          int ans=0;
          sort(arr+1,arr+n+1);
          for(int i=n;i>=1;i--)
           {
               if(i>=arr[i])
               {
                   ans=i;
                   break;
               }
           }
           cout<<ans+1<<nn; 
     }
}
int main()
{
 _00_
 //in;
 solve();
 return 0;
}