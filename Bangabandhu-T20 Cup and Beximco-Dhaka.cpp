#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long

using namespace std;

int main() {
    fastio;
    ll x,y,t;
    cin>>t;
    while (t--)
    {
        cin>>x>>y;

     if(x>=2)  cout<<x/2<<endl;
     else cout<< '0'<<endl;
    }


    return 0;
}
