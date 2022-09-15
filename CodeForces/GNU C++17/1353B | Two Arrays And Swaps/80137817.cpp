#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k,aa[1001],b[1001],i,j;
        cin>>n>>k;
        for(i=0; i<n; i++)
        {
            cin>>aa[i];
        }
        sort(aa,aa+n);
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        sort(b,b+n);
        reverse(b,b+n);
        int sum=0;
        if(k>0)
        {
            k--;
            for(i=0; i<n; i++)
            {
                if(aa[i]<b[i])
                {
                    aa[i]=b[i];
                }
                if(i==k)
                    break;
            }
        }
            for(i=0; i<n; i++)
            {
                sum+=aa[i];
            }
        cout<<sum<<endl;
    }
}