#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
int q,n;
cin>>q;
while(q--){
    cin>>n;
    if(n==2){
        cout<<2<<endl;
    }
    else{
        (n&1)?cout<<1<<endl:cout<<0<<endl;
    }
}

return 0;
}
