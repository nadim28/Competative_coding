#include<bits/stdc++.h>
using namespace std;
int main()
{ int a,b, i,j,count=0;
   string s,t;
   cin>>s;
   cin>>t;
   a=s.length();
   b=t.length();
   for(i=0;i<a;i++)
   {
       for(j=b-1;j>=0;j--)
       {
           if(s[i]==t[j])
           {
               count++;
           }

       }
   }

if(count==a)
{
    cout<<"YES";
}else{
cout<< "NO";}
return 0;
}

