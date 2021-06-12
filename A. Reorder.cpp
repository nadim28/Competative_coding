#include<bits/stdc++.h>
#define ll long long
#define N ((int)1e3 + 5)
#define MOD ((int)1e9 + 7)
#define thr 1e-8
#define pi acos(-1)
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)


using namespace std;
int main(){
int t;
cin>>t;
while(t--){
        int n,m;
    cin>>n>>m;
    int s=0;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    s+=a;
}
cout << (s == m? "YES\n" : "NO\n");
    }


return 0;

}
