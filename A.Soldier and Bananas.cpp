#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,k,w,s,sum=0;
cin>>k>>n>>w;
for(int i=1;i<=w;i++)
{
    sum=sum+i;
}
 s=k*sum;
    if(s<=n)
    {
        cout<< 0;
    }else{
    cout<<s-n;
    }
    return 0;














    return 0;
}
