#include<bits/stdc++.h>
using namespace std;
bool Binary_Search(int n,int d)
{
    int low=0,high=n;
    while(low<=high)
    {
        int mid=(low+high)>>1;
        int cur=mid+(d+mid)/(mid+1);
        if(cur<=n)
        {
            return true;
            break;
        }
        else 
        high=mid-1;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        if(Binary_Search(n,d))
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}