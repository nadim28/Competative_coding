
#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,l,flag=0;
string a;
cin>>a;
l=a.length();
for(i=0;i<l;i++)
{
    if(a[i]== 'H'||a[i]=='Q'||a[i]=='9')
    {
        flag=1;
    }

    else{continue;}
}
if(flag==1)
{
    cout<< "YES";
}else{
cout<< "NO";
     }

return 0;
}
