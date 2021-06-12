#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,ans;
  cin>>t;
  while(t--)
  { int x,y,n;
      cin>>x>>y>>n;
       ans= (n/x)*x+y;
      if(ans>n){
        ans=ans-x;
        cout<<ans<<endl;
      }else {cout<<ans<<endl;}

      }

      return 0;


}
