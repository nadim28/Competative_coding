#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll x,y,z;
        x = pow(10,a-1);
        y= pow(10,b-1);
        z=pow(10,c-1);
        cout<<x<<" "<<(y+z)<<endl;

    }

    return 0;

}
