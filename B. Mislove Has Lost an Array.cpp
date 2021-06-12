#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int n,l,r;
cin>>n>>l>>r;
int min= (1<<l)-1+(n-l);
int max= (1<<r)-1 +(n-r)*(1<<r-1);
cout<<min<< " "<<max<<endl;
return 0;



}
