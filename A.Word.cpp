#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j=0,k=0;
char ch;
string s;
cin>>s;
for( i=0;i<s.length();i++)
   {
 if(isupper(s[i]))
     {
         j++;
     }
 else{
         k++;
     }
     }
 if(j>k)
    {
 for( i=0;i<s.length();i++)
        {
           ch=toupper(s[i]);
           cout<< ch;

        } }
   else{

    for( i=0;i<s.length();i++)
        {

             ch=tolower(s[i]);
             cout<< ch;
   }
   }

return 0;

}
