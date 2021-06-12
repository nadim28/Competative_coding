#include<bits/stdc++.h>
#define ll long long
//#define endl "\n"
using namespace std;
int main(){
ios_base::sync_with_stdio(0),cin.tie(0);
int t;
cin>>t;
while(t--){
    ll r,b,d;
    cin>>r>>b>>d;

cout<<(abs(r-b)<= d*min(r,b)? "Yes" : "No")<<endl;

}
return 0;
}





