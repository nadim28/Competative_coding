#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int n,m,r,x;
cin>>n>>m>>r;
int arr[n];
vector<int>v;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int j=0;j<m;j++){
    cin>>x;
    v.push_back(x);
}

int min= *min_element(arr,arr+n);
int min1=*max_element(v.begin(), v.end()) ;
int div= r/min;
int y= r%min;
int ans = (div*min1)+y;
if(ans>r) {cout<<ans<<endl;}
else cout<<r;
return 0;



}
