#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,mi,sub;
cin>>x>>y;
mi= min(x,y);
cout<<mi<<" ";
sub=abs(x-y);
if(sub>1) cout<<sub/2;
else cout<< '0';
return 0;



}
