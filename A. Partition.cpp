#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x,sum=0,s=0;
cin>>n;
while(n--){
    cin>>x;
    if(x>0) sum+=x;
    else s+=x;
}
cout<<sum-s<<endl;
return 0;



}
