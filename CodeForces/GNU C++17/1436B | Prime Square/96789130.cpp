///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
using ll  = long long int;
using vll = vector<ll>;
using vii = vector<int>;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
using ull = unsigned long long int;
//=============Typedefines=============//
#define        nn           "\n"
#define        F            first
#define        S            second
#define        pi           acos(-1.0)
#define        inf          1<<30 //2^30
#define        no           cout<<"NO"<<nn;
#define        yes          cout<<"YES"<<nn;
#define        all(x)       (x).begin(),(x).end()
#define        test         int t, tc; cin>>t; for( tc = 1;tc <= t ; tc++)
#define        deb(a)       cerr<<"Line "<<__LINE__<<" # "<<#a<<" -> "<<a<<nn;
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//=============Functions===============//
ll To_int(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
template<typename T>T gcd(T a,T b) {if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template<typename T>T lcm(T a,T b) {if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
void input()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
    #endif
}
int mat[110][110];
bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
    if(n%i==0)
    return false;
    return true;
}
int main()
{
   _00_
   //input();
      test
      {
          int n;
          cin>>n;
          for(int i=0;i<n;i++)
          {
              for(int j=0;j<n;j++)
              mat[i][j]=1;
          }
         if(isprime(n))
         {
             for(int i=0;i<n;i++)
          {
              for(int j=0;j<n;j++)
              {
                  cout<<mat[i][j]<<' ';
              }
              cout<<nn;
          }
         }
         else 
         {
             int x;
             for(int i=n;;i++)
             {
                 int need=i-(n-1);
                    if(isprime(i) and !isprime(need))
                    {
                        x=i-(n-1);
                        break;
                    }
             }
              for(int i=0;i<n;i++)
          {
              for(int j=0;j<n;j++)
             {
                 if(i==j)
                 mat[i][j]=x;
             }
          }
           for(int i=0;i<n;i++)
          {
              for(int j=0;j<n;j++)
              {
                  cout<<mat[i][j]<<' ';
              }
              cout<<nn;
          }
         }
 
      }
   return 0;
}