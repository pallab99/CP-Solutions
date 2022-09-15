///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
using ull= unsigned long long;
using pll= pair<ll,ll>;
using pii= pair<int,int>;
const int sz= 100010;
 
#define        nn           "\n"
#define        sp           " "
#define        F            first
#define        S            second
#define        OO           (1<<30)
#define        mod          1000000007
#define        pi           acos(-1.0)
#define        no           cout<<"NO"<<endl;
#define        yes          cout<<"YES"<<endl;
#define        all(x)       (x).begin(),(x).end()
#define        test         int t;cin>>t;while(t--)
#define        deb(a)       cout<<" # "<<#a<<" -> "<<a<<endl;
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
struct Function
{
ll To_int(string str){stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string To_string(ll x){stringstream ss; ss << x; string str = ss.str(); return str;}
bool vowel_up(char c){return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool vowel_low(char c){return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
template<typename T>T gcd(T a,T b){if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template<typename T>T lcm(T a,T b){if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
};
 
void inout()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
    #endif
}
const int block = 316;
struct query
{
    int l, r, ind;
};
vector<query>Q;
vector<int>ans;
vector<int>ara;
unordered_map<int,int>freq;
int cnt = 0;
void add(int index)
{
    freq[ara[index]]++;
    if (freq[ara[index]] == ara[index])
        cnt++;
    if (freq[ara[index]] == ara[index]+1)
      
        cnt--;
}
void remove(int index)
{
    freq[ara[index]]--;
    if (freq[ara[index]] ==ara[index])
      
        cnt++;
    if (freq[ara[index]] ==ara[index]-1)
        cnt--;
}
bool cmp(query f, query s)
{
    if ((f.l / block) != (s.l / block))
        return (f.l / block) < (s.l / block);
    else
        return f.r < s.r;
}
void MOS_ALGO(int q)
{
    int ML = 0, MR = -1;
    sort(all(Q),cmp);
    for (int i = 0; i < q; i++)
    {
        int left = Q[i].l, right = Q[i].r;
        ///extending range
        while (MR < right)
        {
            MR++;
            add(MR);
        }
        while (ML > left)
        {
            ML--;
            add(ML);
        }
        while (MR > right)
        {
            remove(MR);
            MR--;
        }
        while (ML < left)
        {
            remove(ML);
            ML++;
        }
        ans[Q[i].ind] = cnt;
    }
}
int main()
{
   _00_
   //inout();
      int n,q;
    cin >> n>>q;
    ara.resize(n);
    Q.resize(q);
    ans.resize(q);
    for(auto &i:ara)
    cin>>i;
    for (int i = 0; i < q; i++)
    {
        cin >> Q[i].l >> Q[i].r;
        Q[i].ind = i;
        Q[i].l--;
        Q[i].r--;
    }
    
    MOS_ALGO(q);
    for(auto i:ans)
    cout<<i<<nn;
 return 0;
}