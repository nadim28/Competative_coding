#include<bits/stdc++.h>
#include<bits/stdc++.h>
#define ll long long
#define N ((int)2e5 + 5)
#define MOD ((int)1e9 + 7)
#define MAX ((int)1e9 + 7)
#define MAXL ((ll)1e18 + 7)
#define MAXP ((int)1e3 + 7)
#define thr 1e-8
#define pi acos(-1)
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
using namespace std;
int main(){
int n,p,a,b,x;
cin>>n;
set<int>ss;
cin>>p;
for(int i=0;i<p;i++){
    cin>>a;
    ss.insert(a);
}
cin>>x;
for(int j=0;j<x;j++){
    cin>>b;
    ss.insert(b);
}
puts(ss.size() == n ? "I become the guy." : "Oh, my keyboard!");


return 0;

}
