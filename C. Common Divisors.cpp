#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int main(){
int n;
cin>>n;
ll g=0;
for(int i=1;i<=n;++i){
    ll x;
    cin>>x;
   g= __gcd(g,x);
}
ll ans=0;
for(ll i=1;i*i<=g;++i){
    if(g%i==0){
        ans++;
        if(i*i!=g){
            ans++;
        }
    }

}
cout<<ans<<endl;
return 0;

}
