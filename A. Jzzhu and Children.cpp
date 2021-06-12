#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
ios_base::sync_with_stdio(false),cin.tie(nullptr);
int n;
double m;
cin>>n>>m;
int arr[n];
for(int i=0;i<n;i++){
        cin>>arr[i];
    if(arr[i]<=m)
        arr[i]=0;
    }
    double value=0;
    int count=0;

    for(int i=0;i<n;i++){
        if(ceil(arr[i]/m)>=value){
            value= ceil(arr[i]/m);
count =i;
        }
}
cout<<count+1<<endl;
return 0;
}
