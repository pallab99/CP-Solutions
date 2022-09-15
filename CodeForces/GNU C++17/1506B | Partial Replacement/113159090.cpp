#include<bits/stdc++.h>
using namespace std;
using ll  = long long int;
using vll = vector<ll>;
using vii = vector<int>;
using pll = pair<ll, ll>;
using pii = pair<int, int>;
using ull = unsigned long long int;
//=============Typedefines=============//
#define        nn           "\n"
#define        F            first
#define        S            second
#define        pi           acos(-1.0)
#define        inf          1<<30 //2^30
#define        no           cout<<"NO"<<nn;
#define        yes          cout<<"YES"<<nn;
#define        all(x)       (x).begin(),(x).end()
#define        test         int t, tc; cin>>t; for( tc = 1;tc <= t ; tc++)
#define        deb(a)       cerr<<"Line "<<__LINE__<<" # "<<#a<<" -> "<<a<<nn;
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//=============Functions===============//
ll To_int(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
template<typename T>T gcd(T a, T b) {if (a < 0)return gcd(-a, b); if (b < 0)return gcd(a, -b); return (b == 0) ? a : gcd(b, a % b);}
template<typename T>T lcm(T a, T b) {if (a < 0)return lcm(-a, b); if (b < 0)return lcm(a, -b); return a * (b / gcd(a, b));}
void input()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
}
int main()
{
 _00_
 //input();
 test
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int f=s.find_first_of('*');
        int l=s.find_last_of('*');
        //deb(f);
        //deb(l);
        //int cnt=2;
        //if(l>f and l<=n)
        //cnt++;
        //deb(cnt);
        if(f==l)
            cout<<1<<nn;
        else 
        {
        int cnt1=0,idx,cnt=2;
        for(int i=f+1;i<l;i++)
        {
              cnt1++;
              if(s[i]=='*')
              idx=i;
              if(cnt1==k and s[i]!='x')
              {
                  s[idx]='x';
                  cnt++;
                  cnt1=i-idx;
              } 
        }
        cout<<cnt<<nn;
        }
    }
 return 0;
}