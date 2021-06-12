#include<bits/stdc++.h>
#define ll long long;
#define N ((int)1e3 + 5)
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
using namespace std;
vector<int>vec[N];
bool vis[N];
int nxt[N];
bool dfs(int n,int des){
vis[n]=1;
if(n==des) return 1;
for(int i=0;i<vec[n].size();i++){
    int a=vec[n][i];
    if(vis[a]==0){
        if(dfs(a,des)){
            nxt[n]=a;
            return 1;
        }
    }
}
return 0;
}
bool new_dfs(int n,int des,bool path)
{
    vis[n]=1;
    if(n==des){
        if(path==1)return 1;
        else return 0;
    }
    for(int i=0;i<vec[n].size();i++){
        int a=vec[n][i];
        if(vis[a]==0 && nxt[n]!=a){
            if(new_dfs(a,des,1)==1) return 1;
        }
        }
        int a=nxt[n];
        if(vis[a]==0) return new_dfs(a,des,path);
            else return 0;

}
int main(){
fastio;
int n,m,q;
cin>>n>>m>>q;
for(int i=1;i<=m;i++){
    int a,b;
    cin>>a>>b;
    vec[a].push_back(b);
    vec[b].push_back(a);
}
while(q--){
memset(vis,0,sizeof vis);
memset(nxt,0,sizeof nxt);
int x,y;
cin>>x>>y;
if(dfs(x,y)==0){
    cout<< "0\n";
    continue;
}memset(vis,0,sizeof vis);
if(new_dfs(x,y,0)==1){
    cout<< "0\n";}
    else cout<< "1\n";

}
return 0;
}















