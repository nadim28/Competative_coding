#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
ios_base::sync_with_stdio(0),cin.tie(0);
int t;
cin>>t;
while(t--){
    double a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;

    int ans1= ceil(a/c);
    int ans2=ceil(b/d);

    if(ans1+ans2>e){
        cout<<-1<<endl;
    }
    else {
        cout<<ans1<< " "<<ans2<<endl;
    }



}

return 0;

}
