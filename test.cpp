#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long

using namespace std;

int main() {
    fastio;
    ll x,y,t,n,k;
    cin>>t;
    while (t--)
    {
      cin>>n>>k;
      string str;
      while (n--)
      {
          cin>>x;
          if(x<=k)
              str+='1',k-=x;
          else
              str+='0';
      }
      cout<<str<<endl;

    }


    return 0;
}
