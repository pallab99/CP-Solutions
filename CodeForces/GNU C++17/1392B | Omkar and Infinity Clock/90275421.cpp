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
vll res1,res2;
int main()
{
   _00_
   //input();
    test
    {
        res1.clear();
        res2.clear();
        ll n,k;
        cin>>n>>k;
        vll ara(n);
        for(ll i=0;i<n;i++)
        cin>>ara[i];
 
        ll mx1=*max_element(all(ara));
        for(auto i:ara)
            res1.push_back(mx1-i);
        ll mx2=*max_element(all(res1));
        for(auto i:res1)
        res2.push_back(mx2-i);
        if(k%2)
        {
            for(auto i:res1)
            cout<<i<<sp;
            cout<<nn;
        }
        else 
        {
            for(auto i:res2)
            cout<<i<<sp;
            cout<<nn;
        }
    }
   return 0;
}