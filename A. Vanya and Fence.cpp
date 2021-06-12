#include<bits/stdc++.h>
using namespace std;
int main(){
int n,h,m,count=0;
cin>>n>>h;
for(int i=0;i<n;i++){
    cin>>m;
    if(m>h) count=count+2;
    else count=count+1;
}
cout<<count;
return 0;

}
