#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
ios_base::sync_with_stdio(0),cin.tie(0);
int t,x,y,z;
cin>>t;
int ans=0;
while(t--){
    cin>>x>>y>>z;
    while(z>1 && y>=1) {
        y-=1;
        z-=2;
        ans+=3;
    }
    while(y>1 && x>=1){
        x-=1;
        y-=2;
        ans+=3;
    }

    cout<<ans<<endl;
    ans=0;
}

    return 0;
}


