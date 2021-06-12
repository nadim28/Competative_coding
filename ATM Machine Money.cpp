#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long

using namespace std;

int main() {
    fastio;
    ll t;
    cin>>t;
    while(t--){
        ll n,k,x;
        string str;
        cin>>n>>k;
         while(n--){
                cin>>x;

        if(x<=k)
            str+='1',k-=x;
        else
            str+='0';}

    cout<<str<<endl;
    }
    return 0;
}

