#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int q,n;
    cin>>q;
    while(q--)
    {
        cin>>n;

        ll arr[n];
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        ll ans=0;
        sort(arr,arr+n);
        for(ll i=0; i<n-1; i++)
        {

            if(arr[i+1]-arr[i]==1)
            {
                ans=1;
            }

        }
        if(ans==0 || n==1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }

    return 0;
}
