#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j, n,count=0;
  cin>>n;
  char s[n];
  for(j=0;j<n;j++)
  {
      cin>>s[j];
  }

  for(i=1;i<=n;i++)
  {
      if(s[i]==s[i-1])
      {
          count++;
      }
  }
    cout<<count;
    return 0;




}

