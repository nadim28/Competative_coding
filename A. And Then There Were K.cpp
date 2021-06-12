#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int n;
  cin>>n;
  while(n--){
    int m=n;
    if(n&m==0){
        cout<< "m"<<endl;
        break;
    }
    else m-=1;
  }

 }

    return 0;

}
