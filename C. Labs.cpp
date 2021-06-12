#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
ios_base::sync_with_stdio(0),cin.tie(0);
int n,arr[305][305];
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(j%2==0){
            arr[i][j]= j*n+i+1;
        }
        else {
            arr[i][j]=j*n+n-i;
        }
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";

    }
    cout<<endl;
}

return 0;

}
