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
#define        sp           " "
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
int mat[310][310];
int main()
{
   _00_
   input();
      test
      {
          int n,m;
          cin>>n>>m;
          for(int i=1;i<=n;i++)
          for(int j=1;j<=m;j++)
          cin>>mat[i][j];
         bool flag=1;
          for(int i=1;i<=n;i++)
          {
              for(int j=1;j<=m;j++)
              {
                  if((i==1 and j==1) or (i==1 and j==m) or (j==1 and i==n) or (i==n and j==m))
                  {
                      if(mat[i][j]>2)
                      flag=0;
                  }
                  else if(i==1||i==n||j==1||j==m)
                {
                    if(mat[i][j]>3)
                        flag = 0;
                }
                else if(mat[i][j]>4)
                    flag = 0;
              }
          }
          if(!flag)
             no
          else 
          {
              for(int i=1;i<=n;i++)
          {
              for(int j=1;j<=m;j++)
              {
                  if((i==1 and j==1) or (i==1 and j==m) or (j==1 and i==n) or (i==n and j==m))
                      mat[i][j]=2;
                  else if(i==1||i==n||j==1||j==m)
                mat[i][j]=3;
                else 
                mat[i][j]=4;
              }
          }
             yes
           for(int i=1;i<=n;i++)
          {
              for(int j=1;j<=m;j++)
              {
                 cout<<mat[i][j]<<sp;
              }
              cout<<nn;
          }
          }
      }
   return 0;
}