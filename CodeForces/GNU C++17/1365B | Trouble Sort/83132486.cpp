///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
///-------------------Typedefine---------------------///
using ll=long long;
using ull=unsigned long long int;
using vll=vector<ll>;
using mll=map<ll,ll>;
using pll=pair<ll,ll>;
using vii=vector<int>;
using mii=map<int,int>;
using pii=pair<int,int>;
#define     nn         "\n"
#define     sp         " "
#define     ff         first
#define     ss         second
#define     pi         acos(-1.0)
#define     Fin        freopen("input.txt","r",stdin)
#define     Fout       freopen("output.txt","w",stdout)
#define     all(x)     (x).begin(), (x).end()
#define     haha       cout<< "YES" <<endl;
#define     oono       cout<< "NO" <<endl;
#define     REP(a,n)      for(int i=a;i<n;i++)
#define     rep(b,n)      for(int i=b;i>0;i--)
#define   Precision(a) cout << fixed << setprecision(a)
#define     deb(a)     cout<<__LINE__<<" # "<<#a<<" -> "<<a<<endl;
#define     FasterIO   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define     test       int t;cin>>t;while(t--)
///-------------------Function---------------------///
bool is_vowel_up(char c)  {return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool is_vowel_low(char c) {return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
inline ll Strtoint(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
inline string inttostr(ll x) {stringstream ss; ss << x; string str = ss.str(); return str;}
template <typename T> T gcd(T a,T b) { if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template <typename T> T lcm(T a,T b) { if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
///-----------------Main code---------------------///
int ara[200000+10];
int type[200000+10];
bool Sorted(int n)
{
         REP(1,n)
         if(ara[i-1]>ara[i])
         return false;
     return true;
}
int main()
{
 FasterIO
    test
    {
        int n,cnt0=0,cnt1=0;
        cin>>n;
        REP(0,n)
        cin>>ara[i];  
        REP(0,n)
        cin>>type[i];
        if(Sorted(n))
        {
            cout<<"Yes"<<nn;
            continue;
        }
        else 
        {
           REP(0,n)
            {
                if(type[i]==0)
                cnt0++;
                else 
                cnt1++;
            }
            //deb(cnt1);
            //deb(cnt0);
           if(cnt0>=1 && cnt1>=1)
          cout<<"Yes"<<nn;
           else
          cout<<"No"<<nn;
        }
    }
 return 0;
}