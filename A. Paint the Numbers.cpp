#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int main(){
int n,x,count=0;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
}
sort(v.begin(),v.end());
for(int i=0;i<n;i++){
    if(v[i]!=0){
        count+=1;
        for(int j=i+1;j<n;j++){
        if(v[j]%v[i]==0 && v[j]!=0){
            v[j]=0;
        }
        }

      }

}
cout<<count<<endl;
return 0;

}
