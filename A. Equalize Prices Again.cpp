#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,s=0;
cin>>t;
while(t--){
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s+=arr[i];

    }
    cout<< (s+n-1)/n<<endl;
    s=0;
}
return 0;

}
