#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
int x,y,a=1,b=1;
cin>>x>>y;

for(int i=1;i<=x;i++) a*=i;
for(int i=1;i<=y;i++) b*=i;
if(x>y) cout<<b;
else cout<<a;
return 0;


}
