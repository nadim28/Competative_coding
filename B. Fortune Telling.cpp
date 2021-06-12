#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,count=0,sum=0,arr[105];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]%2==0)
            { count++;}
    }
    if(sum%2) cout<<sum<<endl;
    else{
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]%2){
                sum-=arr[i];
                break;
            }
        }
        if(count==n) sum=0;
        cout<<sum<<endl;


    }
    return 0;
}
