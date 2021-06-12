#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x,sum=0,su=0,count=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];


}
sort(arr,arr+n,greater<int>());
for(int i=0;i<n;i++){
    su+=arr[i];
    sum-=arr[i];
    count++;
    if(su>sum){

        break;
    }
}
cout<<count<<endl;
return 0;

}
