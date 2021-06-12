#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,p,c,s=0;
cin>>n;
while(n--)
{
  cin>>p>>c;
   if((c-p)>=2)
   {
  s++;
   }
  else{
        continue;
    }
}
cout<<s;

return 0;

}

