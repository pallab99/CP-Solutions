///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 1<<28
vector<pair<ll,ll>>G[2000000];
ll n,m;
priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> q;
bitset<2000000>vis;
ll parent[2000000];
vector<ll>dist;
void pathprint(ll n)
{
    if(parent[n]) 
    pathprint(parent[n]);
    cout<<n<<" ";
}
void Dijkstra(ll src)
{
    dist.assign(n+1,1e18);
    q.push({dist[src]=0,1});
    while(!q.empty())
    {
        ll u=q.top().second;
        q.pop();
        for(auto i:G[u])
        {
            ll v=i.first;
            ll w=i.second;
            if(dist[v]>dist[u]+w)
            {
                dist[v]=dist[u]+w;
                q.push({dist[v],v});
                parent[v]=u;
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for(ll i=1;i<=m;i++)
    {
        ll u,v,w;
        cin>>u>>v>>w;
        G[u].push_back({v,w});
        G[v].push_back({u,w});
    }
    Dijkstra(1);
    if(dist[n]==1e18)
    puts("-1");
    else
        pathprint(n);    
 return 0;
}
 