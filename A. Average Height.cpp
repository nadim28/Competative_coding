#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
 ll t;
 cin>>t;
 while(t--){
        ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];

    }
sort(arr,arr+n);

for(ll j=0;j<n;j++){
        if(arr[j]%2!=0){
        cout<<arr[j]<< " "; }
    }
    for(ll j=0;j<n;j++){
        if(arr[j]%2==0){
        cout<<arr[j]<< " "; }
    }

 cout<<endl;
 }

 return 0;
}
