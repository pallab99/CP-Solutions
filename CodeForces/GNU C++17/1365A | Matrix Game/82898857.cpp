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
#define   Precision(a) cout << fixed << setprecision(a)
#define     deb(a)     cout<<__LINE__<<" # "<<#a<<" -> "<<a<<endl;
#define     FasterIO   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
///-------------------Function---------------------///
bool is_vowel_up(char c)  {return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool is_vowel_low(char c) {return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
inline ll Strtoint(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
inline string inttostr(ll x) {stringstream ss; ss << x; string str = ss.str(); return str;}
template <typename T> T gcd(T a,T b) { if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template <typename T> T lcm(T a,T b) { if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
///-----------------Main code---------------------///
int mat[100][100];
int n,m;
bool row(int r)
{
    for(int i=0;i<m;i++)
       if(mat[r][i])
       return false;
       return true;
}
bool col(int c)
{
    for(int i=0;i<n;i++) 
    if(mat[i][c]) 
    return false;
    return true;
}
int main()
{
 FasterIO
    int t;
    cin>>t;
    while(t--)
    {
        int r=0,c=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<m;j++)
           cin>>mat[i][j];
        }
       for(int i=0;i<n;i++)
       {
           if(row(i))
           r++;
       }
       for(int i=0;i<m;i++)
       {
           if(col(i))
           c++;
       }
       //deb(r);
       //deb(c);
       int mn=min(r,c);
       if(mn%2==0)
       cout<<"Vivek"<<endl;
       else 
       cout<<"Ashish"<<endl;
    }
 return 0;
}