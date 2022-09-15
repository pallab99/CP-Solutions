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
#define     MEM(a,b)     memset(a,b,sizeof a)
#define     all(x)       (x).begin(),(x).end()
#define     test         int t;cin>>t;while(t--)
#define     in           freopen("input.txt","r",stdin);
#define     out          freopen("output.txt","w",stdout);
#define     err          freopen("error.txt","w",stderr);
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
vii v;
bitset<100100>vv;
void solve()
{
     test
     {
         v.clear();
         vv.reset();
         int n,x,sum=0;
         cin>>n>>x;
         for(int i=0;i<n;i++)
         {
             int a;
             cin>>a;
             sum+=a;
             if(a%x==0)
             vv[i]=1;
             v.push_back(a);
         }
        int i=0,j=0;
        while(j<n and v[n-j-1]%x==0)
             j++;
         while(i<n and v[i]%x==0)
             i++;
             //deb2(i,j);
             //deb(vv.count());
         if(vv.count()==n)
             cout<<-1<<nn;
         else if(sum%x!=0)
         cout<<n<<nn;
         else 
         cout<<n-min(i,j)-1<<nn;
     }
}
int main()
{
 _00_
 //in
 //out
    //err
 solve();
 return 0;
}