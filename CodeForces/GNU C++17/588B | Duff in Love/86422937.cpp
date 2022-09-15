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
#define        all(x)       (x).begin(),(x).end()
#define        deb(a)       cout<<" # "<<#a<<" -> "<<a<<endl;
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
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
vector<ll>divisors;
void Find_Divisors(ll n)
{
    for(int i=1;i<=sqrt(n);i++)
      {
          if(n%i==0)
          {
              if(i*i==n)
              divisors.push_back(i);
              else 
              {
                  divisors.push_back(i);
                  divisors.push_back(n/i);
              }
          }
      }
      sort(all(divisors),greater<ll>());
}
int main()
{
   _00_
   //inout();
      ll n;
      cin>>n;
      Find_Divisors(n);
    ll ans;
    for(ll &i:divisors)
    {
        bool flag=true;
        //deb(i);
        ll sq=sqrt(i);
        //deb(sq);
        for(ll j=2;j<=sq;j++)
        {
            if(i%(j*j)==0)
            {
                flag=false;
                break;
            }
        }
           if(flag)
            {
                ans=i;
                break;
            }
    }
    cout<<ans;
 return 0;
}