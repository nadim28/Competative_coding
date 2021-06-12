#include<bits/stdc++.h>
using namespace std;
#define ll long long

int test(){
ll n;
cin>>n;
ll a[n+1];
ll one=0;
for(ll i=1;i<=n;i++){
    cin>>a[i];

}
ll count =0;
for(ll i=0;i<n;i++){

    if(abs(a[i]-a[i+1])==1){
        count++;
    }
    }
    if(abs(a[0]-a[n])==1){
        count++;

    }
    if(count>=n-1) {
        cout<< "Yes"<<endl;
    }
    else {
        cout<< "No"<<endl;
    }

return 0;
}




int main(){
ll q;
cin>>q;
while(q--){
    test();
}
return 0;
}
