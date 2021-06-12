#include<bits/stdc++.h>
#define ll long long
#define N ((int)2e5 + 5)
#define MOD ((int)1e9 + 7)
#define MAX ((int)1e9 + 7)
#define MAXL ((ll)1e18 + 7)
#define MAXP ((int)1e3 + 7)
#define thr 1e-8
#define pi acos(-1)
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"

using namespace std;
int main(){
int arr[4];
for(int i=0;i<4;++i){

    cin>>arr[i];
}
int x= *max_element(arr,arr+4);
for(int i=0;i<4;++i) {
    if(arr[i]!=x)
        cout<<abs(arr[i]-x)<<" " ;
}

return 0;

}
