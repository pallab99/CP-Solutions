#include <bits/stdc++.h> 
using namespace std; 
string newString(string s) 
{ 
 int l = s.length(); 
 int freq[26] = { 0 }; 
 for (int i = 0; i < l; i++) 
    { 
  freq[s[i] - 'a'] ++; 
 } 
 string ans = ""; 
 for (int i = 0; i < 26; i++) 
    { 
  for (int j = 0; j < freq[i]; j++) 
        { 
   ans += (char)(97 + i); 
  } 
 } 
 
 return ans; 
} 
int main() 
{ 
    int n;
    cin>>n;
 string s;
    cin>>s;
 cout << newString(s); 
 
 return 0; 
} 