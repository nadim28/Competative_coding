#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long

using namespace std;

int main() {
    fastio;
    int p;
    cin>>p;
    while(p--){
    ll n,m,c,r;
    cin>>n>>m>>c>>r;

    cout<< max((n-c),c-1)+max((m-r),r-1)<<endl;
    }
    return 0;
}

