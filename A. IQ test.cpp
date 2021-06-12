#include<bits/stdc++.h>
#define N ((int)(1e+6))
using namespace std;
int main()
{
  int n,arr[100],co=0,ce=0,x,y;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>arr[i];
    if(arr[i]%2==0){
        ce++;
        x=i;
    }
    else{
        co++;
        y=i;
    }

}
if(ce==1) cout<< x;
else if(co==1) cout<<y;
return 0;
}
