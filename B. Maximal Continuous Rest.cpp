#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
int n,ans;
cin>>n;
vector<int>arr(2*n);
for(int i=0;i<n;i++){
    cin>>arr[i];
    arr[i+n]=arr[i];
}
int count=0,curr=0;
for(int i=0;i<2*n;i++){
    if(arr[i]==1){
        count++;
    }
    else{
            count=0;
    }
    curr= max(curr,count);
}
cout<<curr<<endl;
return 0;


}
