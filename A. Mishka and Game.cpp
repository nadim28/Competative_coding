#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long
using namespace std;
int main(){
int n, sum=0,su=0;
cin>>n;
while(n--){
    int x,y;
    cin>>x>>y;
    if(x>y) sum++;
     else if(y>x)su++;
    }


if(sum>su) cout<<"Mishka";
    else if(sum<su) cout<< "Chris";
    else cout<< "Friendship is magic!^^";
    return 0;


}
