#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long

using namespace std;

int main()
{
    int n, x, y;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        if(x%2 == 1){
            x = x-1;
        }
        int res = x/2;
        if(res<=y){
            cout<<res<<endl;
        }
    }
}
