#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,count=1,m=1;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
 cin>>a[i];
 if(a[i]>=a[i-1])
    {
     count++;
     m=max(count,m);
    }
    else count=1;
}
cout<<m;
return 0;
}










