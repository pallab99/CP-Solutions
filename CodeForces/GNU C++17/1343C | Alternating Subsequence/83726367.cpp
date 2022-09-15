///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ull=unsigned long long int;
#define     nn         "\n"
#define     sp         " "
#define     pb         push_back
#define     inf        1000000000
#define     ff         firpq
#define     ss         second
#define     pi         acos(-1.0)
#define     Fin        freopen("input.txt","r",pqdin)
#define     Fout       freopen("output.txt","w",pqdout)
#define     all(x)     (x).begin(), (x).end()
#define     haha       cout<< "YES" <<endl;
#define     oono       cout<< "NO" <<endl;
#define   Precision(a) cout << fixed << setprecision(a)
#define     test       ll t;cin>>t;while(t--) 
#define     deb(a)    cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;
int main()
{
    test
    {
        int n;
        cin>>n;
        int ara[n];
 
        for(int i=1;i<=n;i++)
        cin>>ara[i];
       vector<int>v;
       ll sum=0LL;
       for(int i=1;i<=n;)
        {
            if(ara[i]<0)
            {
                while(ara[i]<0 && i<=n)
                {
                   v.push_back(ara[i]);
                   i++;
                }
            }
            else 
            {
                 while(ara[i]>0 && i<=n)
                {
                   v.push_back(ara[i]);
                   i++;
                }
            }
            make_heap(all(v));
            int it=v.front();
            sum=sum+it;
            v.clear();
        }
        cout<<sum<<nn;
    }
 return 0;
}
 