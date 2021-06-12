#include <bits/stdc++.h>
using namespace std;
#define space " "
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       double a,b,c,d;
       int k;
    cin>>a>>b>>c>>d>>k;

    int ans1=ceil(a/c);
    int ans2=ceil(b/d);

    if(ans1+ans2>k)
      cout<<-1<<endl;
    else
      cout<<ans1<<space<<ans2<<endl;

    }


    return 0;
}
