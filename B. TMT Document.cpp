#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
   ios_base::sync_with_stdio(false),cin.tie(nullptr);
   ll t;
   cin>>t;
   while(t--){
   ll n,a=0;
   string str;
   cin>>n>>str;
   bool ok =0;
   ll cnt= count(str.begin(),str.end(),'M');
   for(int i=0;i<n;i++){
    str[i]== 'T'?a++:a--;
    if(a<0 || a>cnt ){
        ok=1;
    }
    }
    if(a!=cnt){
        ok=1;
    }
    cout<< (ok? "No": "Yes")<<endl;


   }
   return 0;
}
