#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int main(){
ios_base::sync_with_stdio(false),cin.tie(nullptr);
ll q;
cin>>q;
while(q--){
        ll n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n,greater<ll>());
ll sum=0;
bool ok =0;
for(int i=0;i<n;i++){
   if(arr[i]<=2048){
    sum+=arr[i];
    if(sum==2048){
        ok=1;
    }}
}
cout<< (ok? "Yes":"No")<<endl;
sum=0;
}
return 0;
}
