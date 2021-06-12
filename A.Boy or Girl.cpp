#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j, l,le=0;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    l=s.length();
    for(i=1;i<l;i++)
   {
   if(s[i]!=s[i-1])
           {
            le++;
           }
       }

if((le+1)%2==0)
{
    cout<< "CHAT WITH HER!";

}

else{
    cout<< "IGNORE HIM!";
}
return 0;
}
