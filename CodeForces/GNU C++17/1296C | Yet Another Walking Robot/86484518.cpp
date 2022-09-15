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
#define        test         int t;cin>>t;for(int tc=1;tc<=t;tc++)
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
map<pii,int>vis;
int main()
{
   _00_
  // inout();
     test
     {
         vis.clear();
         int n;
         string s;
         cin>>n>>s;
         int l=-1,r=n;
       pii cur = {0, 0};
  vis[cur] = 0;
  for (int i = 0; i < n; ++i) 
        {
   if (s[i] == 'L') cur.F--;
   if (s[i] == 'R') cur.F++;
   if (s[i] == 'U') cur.S++;
   if (s[i] == 'D') cur.S--;
   if (vis.count(cur)) 
            {
    if (i - vis[cur] + 1 < r - l + 1) 
                {
     l = vis[cur];
     r = i;
    }
   }
   vis[cur] = i + 1;
  }
  if (l == -1) 
   cout << -1 << endl;
             else 
   cout << l + 1 << " " << r + 1 << endl;
     }
 return 0;
}