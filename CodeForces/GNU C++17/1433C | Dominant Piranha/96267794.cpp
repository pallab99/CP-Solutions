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
int main()
{
   _00_
   //input();
     test
     {
         int n;
         cin>>n;
         vii ara;
         map<int,int>mp;
         for(int i=0;i<n;i++)
         {
              int x;
              cin>>x;
              ara.push_back(x);
              mp[x]++;
         }
         int mx=*max_element(all(ara));
         int idx=0;
         for(int i=0;i<n;i++)
         {
             if(mx==ara[i])
             {
             if(mx>ara[i+1] and i==0)
             {
                     idx=i+1;
                     break;
             }
             else if(i==n-1 and mx>ara[n-2])
             {
                 idx=i+1;
                 break;
             }
            else  if(i!=0 and i!=n-1 and (mx>ara[i+1] or mx>ara[i-1]))
             {
                 idx=i+1;
                 break;
             }
             }
         }
         if(mp.size()!=1)
         cout<<idx<<nn;
         else 
         cout<<-1<<nn;
     }
   return 0;
}