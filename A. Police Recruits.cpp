#include<bits/stdc++.h>
using namespace std;
int n,a,s,x,y;
int main(){
cin>>n;
for(int i=0;i<n;i++){
cin>>y;
a+=y;
if(a<0){
s++;
a=0;
}
}
cout<<s<<endl;
return 0;
}
