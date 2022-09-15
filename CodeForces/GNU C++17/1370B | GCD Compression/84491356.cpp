///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
///-------------------Typedefine---------------------///
using ll=long long;
using ull=unsigned long long;
using vll=vector<ll>;
using mll=map<ll,ll>;
using pll=pair<ll,ll>;
using vii=vector<int>;
using mii=map<int,int>;
using pii=pair<int,int>;
#define     nn           "\n"
#define     sp           " "
#define     F            first
#define     S            second
#define     OO           (1<<30)
#define     pi           acos(-1.0)
#define     oono         cout<<"NO"<<endl;
#define     haha         cout<<"YES"<<endl;
#define     DBG          cerr << "Done!" << '\n'
#define     all(x)       (x).begin(),(x).end()
#define     test         int t;cin>>t;while(t--)
#define     in           freopen("input.txt","r",stdin)
#define     out          freopen("output.txt","w",stdout)
#define     err          freopen("error.txt","w",stderr)
#define     deb(a)       cout<<" # "<<#a<<" -> "<<a<<endl;
#define     deb2(x,y)    cout <<(#x)<<" -> "<<(x)<<" and "<<(#y)<<" -> "<<(y)<<nn
#define     _00_         ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
///-------------------Function---------------------///
ll To_int(string str){stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string To_string(ll x){stringstream ss; ss << x; string str = ss.str(); return str;}
bool vowel_up(char c){return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool vowel_low(char c){return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
template<typename T>T lcm(T a,T b){ if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
template<typename T>T gcd(T a,T b){ if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
///-----------------Main code---------------------///
vll e,o;
void solve()
{
    test
    {
         e.clear();
         o.clear();
         ll n;
        cin>>n;
        ll a[2*n];
        ll odd=0,even=0;
        for(ll i=0;i<2*n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                even++;
                e.push_back(i+1);
            }
            else
            {
                odd++;
                o.push_back(i+1);
            }
        }
        if(odd%2==1)
        {
        even--;
        odd--;
        }
        else
        {
             if(even>1)
        even-=2;
        else
        odd-=2;
        }
        for(ll i=0;i<odd;i+=2)
            cout<<o[i]<<sp<<o[i+1]<<endl;
 
        for(ll i=0;i<even;i+=2)
            cout<<e[i]<<sp<<e[i+1]<<endl;
    }
    }
int main()
{
 _00_
 //#ifndef ONLINE_JUDGE
       //in;
    //#endif
 solve();
 return 0;
}