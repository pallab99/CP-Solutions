///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
///-------------------Typedefine---------------------///
///abcdefghijklmnopqrstuvwxyz
///ABCDEFGHIJKLMNOPQRSTUVWXYZ
///priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>
using ll=long long;
using ull=unsigned long long int;
using vll=vector<ll>;
using mll=map<ll,ll>;
using pll=pair<ll,ll>;
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
#define     FasterIO   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
///-------------------functions----------------------///
ll a[N+10],prefix[N+10],suffix[N+10];
int main()
{
    FasterIO
    int n,k,x;
    cin>>n>>k>>x;
    ll mul=1;
    while(k--)
        mul *= x;
    for(int i = 1; i <= n; i++)
        cin>>a[i];
 
    for(int i = 1; i <= n; i++)
        prefix[i] = prefix[i-1] | a[i];
 
    for(int i = n; i > 0; i--)
        suffix[i] = suffix[i+1] | a[i];
 
    ll ans = 0;
 
    for(int i= 1; i <= n; i++)
        ans = max(ans, prefix[i-1] | (a[i] * mul) | suffix[i+1]);
   cout<<ans;
}