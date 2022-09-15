#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() 
{
 int t;
 cin>>t;
 ll arr[500010]={0};
 ll k=8;
 ll x=1;
 for(ll i=3 ; i<=500000 ; i+=2)
 {
  arr[i]=arr[i-2]+k*x;
  x++;
  k=8*x;
 }
 while(t--)
 {
  ll n;
  cin>>n;
  cout<<arr[n]<<"\n";
 }
 return 0;
}