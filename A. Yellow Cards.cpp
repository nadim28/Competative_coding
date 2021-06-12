#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int main(){
int a1,a2,k1,k2,n,ans;
cin>>a1>>a2>>k1>>k2>>n;
int temp1= a1*k1;
int temp2= a2*k2;
(n-temp1-temp2+a1+a2<=0)? cout<<0<< " " : cout<<n-temp1-temp2+a1+a2<< " ";

 if(k1<k2){
    if(temp1<n){
        ans=a1;
        n-=temp1;
        }
        else{
            ans=n/k1;
            n=0;
        }
    if(n){
        ans+=n/k2;

    }
    }
else{
    if(temp2<n){
        ans=a2;
        n-=temp2;
    }
    else{
        ans=n/k2;
        n=0;
    }
    if(n){
        ans+=n/k1;
    }


}

cout<<ans<<endl;
return 0;
}
