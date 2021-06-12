 #include<bits/stdc++.h>

#define N ((int)(1e6 + 5))

using namespace std;
vector<int>divv[N];
int main(){

int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j+=i){
       divv[N].push_back(i);
       cout<<divv[j];

    }
}

return 0;
}
