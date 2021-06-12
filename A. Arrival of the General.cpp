#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y,index,idx;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){  cin>>arr[i]; }


    y=  *min_element(arr, arr + n);
x= *max_element(arr, arr + n);
for(int i=0;i<n;i++){
    if(arr[i]==x){
        index=i;
       break;
    } }
for(int j=n-1;j>=0;j--){
    if(arr[j]==y){
        idx=j;
        break;
    } }
 if(index>idx){
    cout<<( n-idx-1)+index-1<<endl;
 }
 else{
    cout<<n-idx-1+index<<endl;
 }


return 0;

}
