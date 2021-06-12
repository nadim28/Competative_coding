#include<bits/stdc++.h>
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
int t,n,m,x;
cin>>t;
int arr[101];
while(t--){
    cin>>n>>m;
int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<m;j++){
        cin>>x;
        for(int k=0;k<n;k++){
            if(x==arr[k]) count++;
        }

    }
    cout<<count<<endl;
}
return 0;

}
