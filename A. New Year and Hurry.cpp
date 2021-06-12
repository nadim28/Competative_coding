#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,sum=0,count=0;
cin>>n>>k;
int sub=240-k;
for(int i=1;i<=n;i++){
    int mul=i*5;
    sum+=mul;
    if(sum<=sub){
        count++;
    }
}
cout<<count;
return 0;

}
