#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,l;
    char s[100];

    cin>>s;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        s[i]=tolower(s[i]);

    }
    for(i=0;i<l;i++)
        {
            switch(s[i])
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'y':

            case 'u':
                break;
            default:
                cout<< '.'<<s[i];

            }

    }
    cout<<endl;
    return 0;
    }

























