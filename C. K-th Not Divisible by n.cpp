#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n,k,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;

x=k/(n-1);
if((x+k)%n==0)
{
    cout<<(x+k)-1<< "\n";
}
else{cout<<x+k<<"\n";}}
return 0;
}
