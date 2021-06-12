#include<bits/stdc++.h>
using namespace std;

int main()
{   int count=0,j=0;
   string s;
    cin>>s;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {

            j++;
        }

    }
if(j==4||j==7)
    {
        cout<< "YES";
    }
    else{
        cout<< "NO";
    }
return 0;

}

