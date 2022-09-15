#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define     FasterIO   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    FasterIO;
    ordered_set st[26];
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
        st[s[i]-'a'].insert(i);
    int tc;
    cin>>tc;
    char c;
    while(tc--)
    {
 
        int n;
        cin>>n;
        if(n==1)
        {
            int pos;
            cin>>pos>>c;
            pos--;
            st[s[pos]-'a'].erase(pos);
            s[pos]=c;
            st[s[pos]-'a'].insert(pos);
        }
        else
        {
 
            int l,r,cnt=0;
            cin>>l>>r;
            l--,r--;
            for(int i=0; i<26; i++)
            {
                if(st[i].order_of_key(l)!=st[i].order_of_key(r+1))
                    cnt++;
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}
 