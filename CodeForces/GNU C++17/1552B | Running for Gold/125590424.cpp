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
 freopen("output.txt", "w", stdout);
#endif
}
 
int main()
{
 _00_
 //input();
 test
 {
          int n;
          cin>>n;
          int mat[n+1][6];
 
          for(int i=1;i<=n;i++)
          {
              for(int j=1;j<=5;j++)
              {
                  cin>>mat[i][j];
              }
          }
             int f=1;
          for(int i=2;i<=n;i++)
          {
              int cnt=0;
              for(int j=1;j<=5;j++)
              {
                   if(mat[f][j]>mat[i][j])
                   cnt++;
              }
              if(cnt>=3)
              f=i;
          }
 
          bool flag=true;
          for(int i=1;i<=n;i++)
          {
              if(i==f)
              continue;
              int cnt=0;
              for(int j=1;j<=5;j++)
              {
                   if(mat[f][j]>mat[i][j])
                   cnt++;
              }
              if(cnt>=3)
             {
                 flag=false;
                 break;
             }
          }
 
          if(flag)
          cout<<f<<nn;
          else 
          cout<<-1<<nn;
 
 }
 return 0;
}