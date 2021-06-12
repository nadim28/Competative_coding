#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
ios_base::sync_with_stdio(false),cin.tie(nullptr);
ll l,r;
cin>>l>>r;
for(int i=l;i<=r;i++){
    string num = to_string(i);
    ll digit= num.size();
    set<char>s;
    for(int j=0;j<digit;j++){
        s.emplace(num[j]);
        }
    if(s.size()==digit){
        cout<<num;
        return 0;
    }

}
cout<<-1;
    return 0;


}
