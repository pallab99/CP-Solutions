#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
int main()
{
    ll l,r;
    cin>>l>>r;
    ll cur=(r-l)/2+1;
    cout<<"YES"<<endl;
    for(int i=0;i<cur;i++)
    cout<<l+i*2<<" "<<l+i*2+1<<endl;
}