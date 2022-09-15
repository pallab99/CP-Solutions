///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
using ull= unsigned long long;
using pll= pair<ll,ll>;
using pii= pair<int,int>;
//-----------Typedefine-------------//
#define        nn           "\n"
#define        sp           " "
#define        F            first
#define        S            second
#define        OO           (1<<30)
#define        pi           acos(-1.0)
#define        no           cout<<"NO"<<endl;
#define        yes          cout<<"YES"<<endl;
#define        FOR(n)       for(int i=0;i<n;i++)
#define        all(x)       (x).begin(),(x).end()
#define        FORR(n)      for(int i=n-1;i>=0;i--)
#define        deb(a)       cout<<" # "<<#a<<" -> "<<a<<endl;
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//--------------IO---------------//
#define        DI(a)        scanf("%d",&a)
#define        DL(a)        scanf("%lld",&a)
#define        DS(s)        scanf("%s",s)
#define        DII(a,b)     scanf("%d%d",&a,&b)
#define        DLL(a,b)     scanf("%lld%lld",&a,&b)
#define        DIII(a,b,c)  scanf("%d%d%d",&a,&b,&c)
#define        DLLL(a,b,c)  scanf("%lld%lld%lld",&a,&b,&c)
//---------------Function---------------//
ll To_int(string str){stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string To_string(ll x){stringstream ss; ss << x; string str = ss.str(); return str;}
template<typename T>T gcd(T a,T b){if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template<typename T>T lcm(T a,T b){if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
void inout()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
    #endif
}
vector<ll>v;
int main()
{
   _00_
   //inout();
      ll n;
      DL(n);
      for(int i=0;i<1000000 && n>0;i++)
      {
          if(n%7==0)
          {
              while(n)
              {
                v.push_back(7);
                n-=7;
              }
          }
          else 
          {
              v.push_back(4);
              n-=4;
          }
      }
      if(n==0)
      {
          for(auto i:v)
          cout<<i;
      }
      else 
      cout<<-1;
 return 0;
}