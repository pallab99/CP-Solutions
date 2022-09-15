#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,i,a[100001],k,f=0;
        cin>>n;
        if(n<10)
        {
            cout<<1<<endl;
            cout<<n<<endl;
            f=1;
        }
        else
        {
            k=1;
            i=1;
            while(n)
            {
                a[i]=(n%10)*k;;
                n=n/10;
                k=k*10;
                if(a[i]!=0)
                    i++;
            }
            cout<<i-1<<endl;
            for(int j=1;j<i;j++)
                cout<<a[j]<<" ";
        }
        if(f==0)
           cout<<endl;
    }
    return 0;
}