#include<bits/stdc++.h>
using namespace std;
int main(){
int l,r,a;
cin>>l>>r>>a;
while(a>0){
 if(l<r){
    l++;
    a--;

 }
 else{
    r++;
    a--;

 }
}
int ans=min(l,r)*2;
cout<<ans;
return 0;


}
