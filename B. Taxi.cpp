#include<bits/stdc++.h>
using namespace std;
int main(){
int n,sum=0;
cin>>n;
while(n--){
    int i;
    cin>>i;
    sum=sum+i;
}
int ans= sum/4;
if(sum%4>0) {
    cout<<ans+1;
}
else { cout<<ans; }

return 0;

}
