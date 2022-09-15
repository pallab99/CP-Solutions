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
       string s(m,'B');
       vector<string>mat(n,s);
       mat[0][0]='W';
       for(int i=0;i<n;i++)
       cout<<mat[i]<<endl;
   }
}