#include<bits/stdc++.h>
#define ll long long
#define N ((int)2e5 + 6)
using namespace std;
vector<int>vec[N];
bool vis[N];
int lev[N];
void bfs(int n){
queue<int>que;
que.push(n);
vis[n]=1;
lev[n]=0;
while(!que.empty()){
    int a=que.front();
    cout<<a<< " ";
    que.pop();
    for(int i=0;i<vec[a].size();i++){
        int b=vec[a][i];
        if(vis[b]==0){
            que.push(b);
            vis[b]=1;
            lev[b]=lev[a]+1;

        }}}
}
int main(){
int n,m;
cin>>n>>m;
for(int i=0;i<n;i++) vis[i]=0;
for(int j=1;j<=m;j++){
    int a,b;
    cin>>a>>b;
    vec[a].push_back(b);
    vec[b].push_back(a);
}
bfs(1);
return 0;

}
