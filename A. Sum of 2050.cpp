#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
ll t;
cin>>t;
while(t--){
    ll n,ans=0;
    cin>>n;
    if((n%2050)!=0) cout<<-1<<endl;
    else{
        n/=2050;
        while(n>0){
          ans+=(n%10);
          n/=10;
        }
        cout<<ans<<endl;

    }


}

return 0;
}
