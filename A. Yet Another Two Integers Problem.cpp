#include<bits/stdc++.h>
using namespace std;
int main(){
int t,a,b,x;
cin>>t;
while(t--){
   cin>>a>>b;
     x=abs(a-b);
    int ans= ceil(x/10.0);
    cout<<ans<<endl;

}
 return 0;
}



