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
template <typename T> void print(T a,char c='\n'){ cout<<a<<c;}
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
vector<ll>prime;
bitset<10000020>status;
void sieve()
{
    ll n=10000020;
    status.set();
    status[0]=0;
    status[1]=0;
    for(int i=2; i*i<=n; i++)
    {
        if(status[i])
            for(int j=2; i*j<=n; j++)
                status[i*j]=0;
    }
}
int main()
{
   _00_
   //input();
      sieve();
      int n;
      cin>>n;
      int ara[n];
      int cnt1=0;
      vii ans;
      for(int i=0;i<n;i++)
      {
          cin>>ara[i];
          if(ara[i]==1)
          cnt1++;
      }
      if(cnt1>1)
      {
         while(cnt1)
         {
             ans.push_back(1);
             cnt1--;
         }
         for(int i=0;i<n;i++)
         {
             if(ara[i]!=1 && status[ara[i]+1])
             {
             ans.push_back(ara[i]);
             break;
             }
         }
      }
      else
      {
      for (int i = 0; i < n; i++)  
    { 
        bool flag=false;
        for (int j = i + 1; j < n; j++)  
        { 
            if (status[ara[i] + ara[j]])  
            { 
              ans.push_back(ara[i]);
              ans.push_back(ara[j]);
              flag=true;
              break;
            } 
        } 
        if(flag)
        break;
    }
      } 
   if(!ans.size())
   {
       print(1);
       print(ara[0]);
       return 0;
   }
     print(ans.size());
     for(auto &it:ans)
     print(it,' ');
   return 0;
}