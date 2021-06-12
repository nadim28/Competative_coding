#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x,count=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]<0){
        count++;
        x=count;
    }
}
sort(arr,arr+n);
sort(arr+x,arr+n,greater<int>());
for(int i=0;i<n;i++){
    cout<<arr[i]<<" " ;
}
return 0;
}

