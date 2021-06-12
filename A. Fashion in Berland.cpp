#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long
#define N ((int)(1e5 + 5))
#define MOD ((int)(1e9 + 7))
using namespace std;
int main(){
int n, c=0;
cin>>n;
int a[1000];

for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==0){
        c++;
        if(c>1){
            break;
        }
    }
}
if(c==1&& n>1) cout<< "YES";
else if(c==0&&n==1 ) cout<< "YES";
else cout<< "NO";
return 0;



}
