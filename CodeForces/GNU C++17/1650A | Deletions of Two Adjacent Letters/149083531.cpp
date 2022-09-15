#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
 
        string s;
        cin >> s;
        char ch;
        cin >> ch;
        bool flag = false;
        for (int i = 0; i < s.size(); i += 2)
        {
            if (s[i] == ch)
            {
                flag = true;
                break;
            }
        }
 
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}