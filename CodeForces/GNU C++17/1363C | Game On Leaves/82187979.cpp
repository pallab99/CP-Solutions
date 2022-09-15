#include<bits/stdc++.h>
using namespace std;
vector<int>G[1020];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        for(int i=0;i<n+10;i++)
        G[i].clear();
        for(int i=0;i<n-1;i++)
        {
            int u,v;
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        if(G[x].size()<=1 || n==1)
        {
            cout<<"Ayush"<<endl;
            continue;
        }
        if(n&1)
        cout<<"Ashish"<<endl;
        else 
        cout<<"Ayush"<<endl;
    }
}