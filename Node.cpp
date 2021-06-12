#include<bits/stdc++.h>
#define ll long long
#define N ((int)2e6 + 5)
using namespace std;
int u[N],v[N],adj[N][N];
pair<int,int>edg[N];
//vector<int>vec[N];
int main(){
int n,m;
cin>>n>>m;
for(int i=1;i<=m;i++){
    int a,b;
    cin>>a>>b;
    u[i]=a;
    v[i]=b;
    edg[i]=make_pair(a,b);
    edg[i]={a,b};
    adj[a][b]=adj[b][a]=1;

}






}


