#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
string s;
cin>>s;
ll l =s.size()-1;
if(l%2==0){
for(ll i=1;i<=l;i++){
    if(s[i]=='1'){
        cout<< l/2+1;
        return 0;
    }
    }
    cout<< l/2;
     }
     else {
        cout<< l/2+1;
     }
return 0;
}


