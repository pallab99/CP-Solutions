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
int main()
{
   _00_
   //input();
      test
      {
          ll n;
          cin>>n;
          vll ara(n);
          for(int i=0;i<n;i++)
              cin>>ara[i];
          ll mx=*max_element(all(ara));
          sort(all(ara),[](ll x,ll y){return abs(x)>abs(y);});
          if(mx<0)
          {
             cout<<ara[n-1]*ara[n-2]*ara[n-3]*ara[n-4]*ara[n-5]<<nn;
          }
          else 
          {
              ll ans=ara[0]*ara[1]*ara[2]*ara[3]*ara[4];
              for(int i=5;i<n;i++)
              {
                  for(int j=0;j<5;j++)
                  {
                      ll temp=ara[i];
                      for(int k=0;k<5;k++)
                      {
                          if(j!=k)
                          temp*=ara[k];
                      }
                      ans=max(ans,temp);
                  }
              }
              cout<<ans<<nn;
          }
      }
   return 0;
}