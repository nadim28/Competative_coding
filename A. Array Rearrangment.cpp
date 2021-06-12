#include<bits/stdc++.h>
#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long
#define N ((int)(2e5 + 5))
#define MAX ((int)(1e9 + 5))
#define MOD ((int)(7901 + 0))
#define thr (1e-8)


using namespace std;
void solve(){
int n,x;
cin>>n>>x;
int a[n],b[n];
for(int i=0; i<n;i++) cin>> a[i];
for(int i=0; i<n;i++) cin>> b[i];
sort(a,a+n);
sort(b,b+n,greater<int>());
bool flag=true;
for(int i=0;i<n;i++){
    if (a[i]+b[i]>x) {
        flag=false;
        break;
    }

}
cout<<(flag? "YES\n":"NO\n");


}

int main(){
int t;
cin>>t;
while(t--) solve();

}
