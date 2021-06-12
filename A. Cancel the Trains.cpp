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
int t,n,m;
cin>>t;

while(t--){
    cin>>n>>m;
    set<int>ss;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ss.insert(a);
    }
    for(int j=0;j<m;j++) {
        int b;
        cin>>b;
        ss.insert(b);
    }

    cout<<m+n-ss.size()<<endl;


}

return 0;

}
