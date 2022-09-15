#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if( n==0 or m==0)
        {
            cout<<0<<endl;
            continue;
        }
        else 
        {   int x,y;
            x=(n+m)/3;
            y=min(n,m);
            cout<<min(x,y)<<endl;
        }
    }
}