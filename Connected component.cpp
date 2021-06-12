#include<bits/stdc++.h>
#define N ((int)2e6 + 5)
using namespace std;
vector<int>vec[N],aux[N];
bool vis[N],new_vis[N];
int cnt;
int com[N];
void dfs(int n){
vis[n]=1;
cnt++;
for(int i=0;i<aux[n].size();i++){
    int a=aux[n][i];
    if(vis[a]==0){
        dfs(a);
    }
}
}
void new_dfs(int n){
new_vis[n]=1;
cout<<n<< "start:\n";
com[n]=cnt;
for(int i=0;i<aux[n].size();i++){
    int a=aux[n][i];
    if(new_vis[a]==0){
        new_dfs(a);
        cout<<n<< "again:\n";
    }
}cout<<n<<"finished:\n";
}
int main(){
int n,m;
cin>>n>>m;
for(int i=0;i<n;i++) vis[i]=0;
for(int i=1;i<=m;i++){
    int a,b;
    cin>>a>>b;
    vec[a].push_back(b);
    aux[a].push_back(b);
    aux[b].push_back(a);
    //cout<< vec[N];
    //cout<< aux[N];

}
int cc=0;
for(int i=1;i<=n;i++){
    if(vis[i]==0){
        cnt=0;
        dfs(i);
        cc++;
        new_dfs(i);
    }

}cout<<cc;

return 0;

}

