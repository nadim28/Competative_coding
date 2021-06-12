#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,b,t=0,p=0;
cin>>n;
while(n--){
    cin>>a>>b;
     p=p-a+b;
    t=max(t,p);
}
cout<<t;
return 0;
}
