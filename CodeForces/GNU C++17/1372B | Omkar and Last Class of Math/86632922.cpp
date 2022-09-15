///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
using ull= unsigned long long;
using pll= pair<ll,ll>;
using pii= pair<int,int>;
//=============Typedefines=============//
#define        nn           "\n"
#define        sp           " "
#define        F            first
#define        S            second
#define        pi           acos(-1.0)
#define        no           cout<<"NO"<<endl;
#define        yes          cout<<"YES"<<endl;
#define        all(x)       (x).begin(),(x).end()
#define        deb(a)       cout<<" # "<<#a<<" -> "<<a<<endl;
#define        test         int t;cin>>t;for(int tc=1;tc<=t;tc++)
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//=============Functions===============//
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
struct node
{
    ll u,v,w;
    bool operator<(const node&p) const
    {
        return w>p.w;
    }
};
vector<ll>Div;
void divisors(ll n)
{
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i*i==n)
            Div.push_back(i);
            else 
            {
                Div.push_back(i);
                Div.push_back(n/i);
            }
        }
    }
}
int main()
{
   _00_
  // inout();
       test
       {
           priority_queue<node>ans;
           Div.clear();
           ll n;
           cin>>n;
           divisors(n);
           //for(auto i:Div)
           //cout<<i<<sp;
        node data;
        for(auto it:Div)
        {
            if(it==n)
            continue;
            data.u=it;
            data.v=n-it;
            data.w=lcm(it,n-it);
            ans.push(data);
        }
       
       cout<<ans.top().u<<sp<<ans.top().v<<nn;
       }
 return 0;
}