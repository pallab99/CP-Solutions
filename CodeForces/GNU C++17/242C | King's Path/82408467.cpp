///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
//#pragma GCC optimize("Ofast,no-stack-protector")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma GCC optimize("unroll-loops")
///-------------------Typedefine---------------------///
///abcdefghijklmnopqrstuvwxyz
///ABCDEFGHIJKLMNOPQRSTUVWXYZ
///priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>
using ll=long long;
using ull=unsigned long long int;
using vll=vector<ll>;
using mll=map<ll,ll>;
using pll=pair<ll,ll>;
using pii=pair<int,int>;
const ll N = 200000;
#define     nn         "\n"
#define     sp         " "
#define     pb         push_back
#define     inf        1000000000
#define     ff         first
#define     ss         second
#define     pi         acos(-1.0)
#define     Fin        freopen("input.txt","r",stdin)
#define     Fout       freopen("output.txt","w",stdout)
#define     all(x)     (x).begin(), (x).end()
#define     haha       cout<< "YES" <<endl;
#define     oono       cout<< "NO" <<endl;
#define     deb(x)     cout << #x << " " << x << endl;
#define   Precision(a) cout << fixed << setprecision(a)
#define     test       ll t;cin>>t;while(t--) 
#define     FasterIO   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
///-------------------functions----------------------///
bool is_vowel_up(char c)  {return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool is_vowel_low(char c) {return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
ll Strtoll(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string llostr(ll x) {stringstream ss; ss << x; string str = ss.str(); return str;}
template <typename T> T gcd(T a,T b) { if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template <typename T> T lcm(T a,T b) { if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
//int dx[] = {0, 0, -1, 1}; // right , left , forward , backward
//int dy[] = {1, -1, 0, 0};
int dx[] = {1, 1, 1, 0, -1, -1, -1, 0}; 
int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
//int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2}; //knight moves
//int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1}; //knight moves
///-----------------Main code---------------------///
map<pii,bool>graph;
map<pii,bool>vis;
map<pii,int>level;
bool isvalid(int x,int y)
{
    return (graph[{x,y}] and !vis[{x,y}]);
}
void bfs(pii u,pii uu)
{
   queue<pii>q;
   level[u]=0;
   q.push(u);
   while(!q.empty())
   {
       pii v=q.front();
       q.pop();
        for(int i=0;i<8;i++)
        {
            int xx=v.ff+dx[i];
            int yy=v.ss+dy[i];
            if(isvalid(xx,yy))
            {
                level[{xx,yy}]=level[v]+1;
                vis[{xx,yy}]=1;
                q.push({xx,yy});
            }
        }
   }
   if(level[uu])
    cout<<level[uu];
    else 
    cout<<-1;
}
int main()
{
    FasterIO
    pii p,pp;
    int x1,y1,x2,y2,n;
    cin>>x1>>y1>>x2>>y2>>n;
   for(int j=0;j<n;j++)
    {
       int r,a,b;
       cin>>r>>a>>b;
       for(int i=a;i<=b;i++)
           graph[{r,i}]=1;
    }
    p={x1,y1};
    pp={x2,y2};
    bfs(p,pp);
    return 0;
}