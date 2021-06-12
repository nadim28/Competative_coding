#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int a[m];
for(int i=0;i<m;i++){
    cin>>a[i];
}
ll sum=a[0]-1;
for(ll i=1;i<m;i++){
    if(a[i]<a[i-1]){
        sum+=(n-a[i-1]+a[i]);
    }
    else {
        sum+=a[i]-a[i-1];
    }
}


cout<< sum<<endl;
return 0;

}
