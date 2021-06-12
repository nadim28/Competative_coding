#include<bits/stdc++.h>
using namespace std;
unsigned int len(unsigned int n)
{
    return n? len(n/10)+1:0;
}
int main()
{ int k;
    string s;
    cin>>s;
    int n=len(s);
    for(int i=0;i<n;i++)
    {
        if(m==4||m[i]==7)
        {
            count++;
        }
    }
    if(count==4||count==7)
    {
        cout<< "YES"
    }



    return 0;

}
