#include<bits/stdc++.h>
#define N ((int)2e6 + 5)
//#define N ((int)2e6 + 5)
using namespace std;
vector<int>vec[N];
bool vis[N];
void dfs(int n){
vis[n]=1;
cout<<n<<"start:\n";
for(int i=0;i<vec[n].size();i++){
    int a=vec[n][i];
    if(vis[a]==0){
        dfs(a);
        cout<<n<< "again \n";
    }
}

cout<<n<< "Finished\n";}
int main()
{
int n,m;
cin>>n>>m;
for(int i=1;i<=n;i++) vis[i]=0;
for(int i=1;i<=m;i++){
    int a,b;
    cin>>a>>b;
    vec[a].push_back(b);
    vec[b].push_back(a);
}
dfs(1);
return 0;

}


