#include<bits/stdc++.h>
using namespace std;
typedef long long l;
int main(){
l n,m;
int count=0;
cin>>n>>m;

if(m%n!=0) {
    cout<<-1<<endl;
    return 0;
}

l div=m/n;

while(div%2==0){
    count++;
    div/=2;
}
while(div%3==0){
    count++;
    div/=3;
}
if(div==1) cout<< count<<endl;
else cout<<-1<<endl;
return 0;


}
