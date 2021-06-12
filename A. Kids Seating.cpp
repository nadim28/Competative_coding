#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n;
cin>>t;
while(t--){
    cin>>n;
    int l=4*n;
    while(n--){
        cout<<l<< " ";
        l-=2;
    }
    cout<<endl;

}
return 0;
}
