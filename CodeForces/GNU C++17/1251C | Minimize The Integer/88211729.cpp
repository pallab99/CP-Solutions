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
#define        deb(a)       cerr<<" # "<<#a<<" -> "<<a<<nn;
#define        test         int t,tc; cin>>t; for( tc = 1;tc <= t;tc++)
#define        Time(...)    fprintf(stderr, __VA_ARGS__), fflush(stderr)
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
int main()
{
   _00_
   input();
     clock_t tStart = clock();
       test
       {
           stack<ll>st1,st2;
           string n;
           cin>>n;
           
           string ans;
           for(int i=n.size()-1;i>=0;i--)
           {
               int digit = n[i] - '0';
               if(digit%2==0)
               st1.push(digit);
               else 
               st2.push(digit);
           }
           while(!st1.empty() and !st2.empty())
           {
               if(st1.top()<st2.top())
               {
                   string ch=to_string(st1.top());
                   ans+=ch;
                   st1.pop();
               }
               else 
               {
                  string ch=to_string(st2.top());
                   ans+=ch;
                   st2.pop();
               }
           }
           while(!st1.empty())
           {
               string ch=to_string(st1.top());
                   ans+=ch;
                   st1.pop();
           }
           while(!st2.empty())
           {
               string ch=to_string(st2.top());
                   ans+=ch;
                   st2.pop();
           }
           cout<<ans<<nn;
           
       }
     Time("Time taken: %.3fs\n",(double)(clock()-tStart)/CLOCKS_PER_SEC);
   return 0;
}