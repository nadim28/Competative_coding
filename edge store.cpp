#include<bits/stdc++.h>
#define N ((int)2e6 + 5)
using namespace std;
int u[N],v[N],adj[N][N];
pair<int,int>edg[N];
vector<int>vec[N];
int main(){
int n,m;
cin>>n>>m;
for(int i=0;i<=m;i++){
    int a,b;
    cin>>a>>b;
    u[i]=a;
    v[i]=b;
    edg[i]=make_pair(a,b);
        edg[i]={a,b};
        adj[a][b]=adj[b][a]=1;
        vec[a].push_back(b);
        vec[b].push_back(a);
        int cur=5;
        for(int i=1;i<=n;i++)
        {
            if(adj[cur][i]==1)
                cout<<i;
        }
        return 0;
}

