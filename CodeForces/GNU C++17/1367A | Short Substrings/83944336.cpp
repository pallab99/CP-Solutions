#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        string cur;
        cur+=s[0];
        cur+=s[1];
        for(int i=3;i<s.size();i++)
        {
            if(i%2)
            cur+=s[i];
        }
        cout<<cur<<endl;
    }
    
    return 0;
 
}