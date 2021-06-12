#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define ll long long
#define endl "\n"

using namespace std;


ll gcd(ll a , ll b)
{
    if(b<a) swap(a,b);


    while(a > 0){
        ll mod = b%a;   /// mod<a
        b = a;
        a = mod;
    }

    return b;
}


int main()
{
    //int a, b;


    int n;
    cin>>n;

   // int ans = 0 ;
    //l//l val = 1; /// val ( 1 , a ) = a
while(n--){
    for(int i = 2 ; i<=4*n ; i++){


       ll ans = __gcd(i , i+1);
        int a=i,b=i+1;
        if(ans!=1 && (a/b)!=0 || (b/a !=0)){
            cout<<a<<b;
        }
    }

return 0;
}
    }


