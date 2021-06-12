#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    while(k--){
        for(int i=1;i<=n;i++){
            if(a[i]){
                a[i]--;
                a[n]++;
                break;
            }}
    }

    for(int i=1;i<=n;i++){
        cout<<a[i]<< " ";
    }
cout<<endl;
}
return 0;

}
