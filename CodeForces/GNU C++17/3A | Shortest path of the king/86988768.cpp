///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
using ll  = long long int;
using ull = unsigned long long int;
using vll = vector<ll>;
using vii = vector<int>;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
//=============Typedefines=============//
#define        sp           " "
#define        nn           "\n"
#define        F            first
#define        S            second
#define        pb           push_back
#define        mp           make_pair
#define        pi           acos(-1.0)
#define        inf          1<<30 //2^30
#define        no           cout<<"NO"<<nn;
#define        yes          cout<<"YES"<<nn;
#define        all(x)       (x).begin(),(x).end()
#define        deb(a)       cerr<<" # "<<#a<<" -> "<<a<<nn;
#define        test         int t,tc;cin>>t;for(tc=1;tc<=t;tc++)
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
string dir[] = {"U" , "RU" , "R" , "RD" , "D" , "LD" , "L" , "LU"};
int dx[] = {-1 , -1 , 0 , 1 , 1 , 1 , 0 , -1};
int dy[] = {0 , 1 , 1 , 1 , 0 , -1 , -1 , -1};
int destx,desty;
bitset<20>vis[20];
struct node
{
 vector<string> ans;
 int x , y;
};
node tmp;
bool isvalid(int x , int y)
{
 if(x<1 || x> 8 || y < 1 || y > 8)
 return false;
 if(vis[x][y] == 1)
 return false;
 return true;
}
void print(vector<string> v)
{
 cout<<v.size()<<endl;
 for(int i=0;i<v.size();i++)
    cout<<v[i]<<nn;
}
void bfs(int x,int y)
{
     queue<node> q;
 tmp.x = x , tmp.y = y;
 q.push(tmp);
 
 vis[x][y] = 1;
 while(!q.empty())
 {
  tmp = q.front();
  q.pop();
  
  if(tmp.x == destx && tmp.y == desty)
  {
   print(tmp.ans);
   return;
  }
  for(int i=0;i<8;i++)
  if(isvalid(tmp.x+dx[i] , tmp.y+dy[i]))
  {
   node temp = tmp;
   temp.x+= dx[i];
   temp.y+= dy[i];
   temp.ans.pb(dir[i]);
   q.push(temp);
   vis[temp.x][temp.y] = 1;
  }
 }
}
int main()
{
   _00_
   //inout();
     char c,d;
     cin>>c>>d;
     int x,y;
     x='9'-d;
     y=c-'a'+1;
     cin>>c>>d;
    destx='9'-d;
    desty=c-'a'+1;
    for(int i=0;i<15;i++)
    vis[i].reset();
    bfs(x,y);
 return 0;
}