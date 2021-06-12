#include<bits/stdc++.h>
#define ll long long
//#define c char
#define endl "\n"
using namespace std;
int main(){
ll n,m;
vector<char>vec;
vector<char>v;
for(int i=1;i<=17;i++){
    cin>>n;
    char c = (char)n;
    if(i==8){
        vec.push_back('.');
    }
    else{
    vec.push_back(c);}
}
for(int i=1;i<=17;i++){
    cin>>m;
    char d = (char)m;
    if(i==8){
        v.push_back('.');
    }
    else {
    v.push_back(d);}
}

char s= vec[1]+vec[2]+vec[3]+vec[4]+vec[5]+vec[6]+vec[7]+vec[8]+vec[9]+vec[10]+vec[11]+vec[12]+vec[13]+vec[14]+vec[15]+vec[16]+vec[17];

char k= v[1]+v[2]+v[3]+v[4]+v[5]+v[6]+v[7]+v[8]+v[9]+v[10]+v[11]+v[12]+v[13]+v[14]+v[15]+v[16]+v[17];

char ans = s/k;
cout<<ans<<endl;


}
