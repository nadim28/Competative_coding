#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b){
if(b<a) swap(a,b);
    while(a>0)
{ ll mod=b%a;
b=a;
a=mod;
}
return b;
}
ll lcm(ll a,ll b){
return a*b/__gcd(a,b);
}
int main()
{
    ll n;
    cin>>n;
    ll ans=1;
    for(int i=2;i<=10;i++){
       ans=lcm(ans,i);}
        ans=n/ans;
cout<<ans;


return 0;
}
