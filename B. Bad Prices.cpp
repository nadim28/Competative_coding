#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
  int n;
  cin>>n;
  //vector<int>a(n);
  int a[n];
  for(auto&it:a){
        cin>>it;
  }
    int mi=a[n-1];
  int c=0;
  for(int i=n-2;~i;i--){
    if(a[i]>mi){
            c++;
    }
    else {
            mi=a[i];
    }
  }
  cout<<c<<endl;
 }
}
