#include<bits/stdc++.h>
using namespace std;
int main()
{
 int i, t,n;
 string s,v;
 cin>>t;
 while(t--)
 {
     cin>>n;
     while(n--);
     cin>>s;
   int  l=s.length();
   for(i=0;i<l;i++)
    if(s[0]==1 && s[1]==1 && s[2]==0 && s[3]==0)
    {
        v= s.erase(s[3]);
    }
   else if(s[0]==1 && s[1]==0 && s[2]==1 && s[3]==0)
   {
        v=s.erase(s[1]);
   }
   else{
     v=s;
   }
cout<< v;
}



   return 0;



}
