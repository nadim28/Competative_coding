#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long

using namespace std;

int main() {
    fastio;
    int x,y,t;
    cin>>t;
    while (t--)
    {
        cin>>x>>y;
        int ans=0;
        while (x>y)
        x-=2,y--,ans++;
        cout<<ans<<endl;
    }


    return 0;
}
