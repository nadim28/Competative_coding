#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define ll long long
#define endl "\n"
#define N ((int)(1e6 + 5))

using namespace std;

int pwr(int n , int p , int mod)
{
    if(p == 0) return 1;
    int ans = pwr(n,p/2,mod);
    ans = 1LL*ans*ans%mod;
    if(p%2 == 1) ans = 1LL*ans*n%mod;
    return ans;
}

int main()
{
    int n , p , m;

        cin>>n>>p>>m;
        cout<<pwr(n,p,m)<<endl;


    return 0;
}
