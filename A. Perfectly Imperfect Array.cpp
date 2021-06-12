#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
ios_base::sync_with_stdio(false),cin.tie(0);

 int t;
 cin>>t;
 while(t--){
    int n,x;
    cin>>n;
    bool ok=0;
    for(int i=1;i<=n;i++){
       cin>>x;

       int y= (int)sqrt(x);
       if(y*y!=x){
        ok=1;
       }
        }
        cout<< (ok?"Yes":"No")<<endl;

 }
    return 0;

}



