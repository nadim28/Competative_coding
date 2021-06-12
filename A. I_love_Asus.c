#include<bits/stdc++.h>
using namespace std;
int main(){
int n,count=0;
cin>>n;
int array[n];
int max=array[0];
int min=array[0];
for(int i=0;i<n;i++){
    if(array[i]>max){
        count++;
    }
    else if(array[i]<min){
        count++;
    }
}
cout<<count;
return 0;


}
