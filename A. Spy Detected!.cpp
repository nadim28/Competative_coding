#include<bits/stdc++.h>
#define dtype long long
using namespace std;
int main(){
int t,answer;
cin>>t;
while(t--){
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int temp=arr[0],count=0;
    for(int i=0;i<x;i++){
        if(arr[i]==temp){
            count++;
        }
        else{
             answer= i+1;
        }

    }
    if(count==1){
            cout<<1<<endl;
        }
        else {
            cout<<answer<<endl;
        }


}
return 0;

}
