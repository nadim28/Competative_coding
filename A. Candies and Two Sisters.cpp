#include<bits/stdc++.h>
using namespace std;
int main(){
long long t,n,x;
cin>>t;
while(t--){
    cin>>n;
    if(n%2==0) cout<<(n/2)-1<<endl;
    else{
        x= n/2;
        cout<<x<<endl;
    }

}
return 0;

}
