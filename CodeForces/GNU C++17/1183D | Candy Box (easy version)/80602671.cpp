#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>cnt(n+1);
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            cnt[a]++;
        }
        sort(cnt.begin(),cnt.end(),greater<int>());
       int ans=*cnt.begin();
       int update=*cnt.begin();
 
       for(int i=1;i<=n;i++)
       {
           if(update==0)
           break;
           if(cnt[i]>=update)
           {
               ans+=update-1;
               update-=1;
           }
           else
           {
               ans+=cnt[i];
               update=cnt[i];
           }
       }
        printf("%d\n",ans);
 
    }
}