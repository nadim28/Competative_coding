#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
ios_base::sync_with_stdio(false),cin.tie(nullptr);
ll q;
cin>>q;
while(q--){
  ll c,m,x;
  cin>>c>>m>>x;

        ll z=min(c,m);
        ll sum= (c+m+x)/3;

        cout<< min(z,sum)<<endl;

}
return 0;

}
