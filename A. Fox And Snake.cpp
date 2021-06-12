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
int main() {
int x,y;
cin>>x>>y;
for(int i=1;i<=x;i++){
    for(int j=1;j<=y;j++){
        if(i%2==1||i%4==2 && j==y || i%4==0&& j==1) cout<< "#";
        else cout<< ".";

    }
    cout<<endl;
}




return 0;


}
