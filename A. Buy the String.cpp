#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
int t;
cin>>t;
while(t--){
        int n,c0,c1,h,one,zero,x,y,z,ans;
string s;
    cin>>n>>c0>>c1>>h;
    cin>>s;
    one= count(s.begin(),s.end(), '1');
    zero=count(s.begin(),s.end(), '0');
    ans=one*c1+zero*c0;
    ans=min(ans, n*c0+h*one);
    ans=min(ans, n*c1+h*zero);

   cout<< ans<<endl;
}
return 0;
}
