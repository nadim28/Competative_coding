#include<bits/stdc++.h>
using namespace std;
int main(){
int t;

cin>>t;

while(t--){
string s="abc";
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cout<<s[i%3];
    }
cout<<endl;
}
return 0;

}
