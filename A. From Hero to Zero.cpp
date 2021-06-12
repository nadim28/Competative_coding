#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ghori_shuru clock_t x= clock();
#define ghori_sbondho clock_t y=clock();
#define kotokhon_laglo cout<<(y-x)*1.0/CLOCKS_PER_SEC;
int main(){
long long t,n,k,m,count=0;
cin>>t;
while(t--){
    cin>>n>>k;

    while(n){
        if(n%k==0){
            n/=k;
            count++;
        }
        else{
            m=n%k;
            n-=m;
            count+=m;
        }


    }
    cout<<count<<endl;
count=0;
}}


