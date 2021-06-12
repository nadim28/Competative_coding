#include<bits/stdc++.h>
using namespace std;
int main()
{
    string t;
    cin>>t;
    int l=t.length();
    if(l<=1) cout<<"-1"<< " "<< "-1";
    for(int i=0;i<l;i++)
    {
        if(t[i]==t[i+1])
            cout<<i<< " "<<i+1;

        else if(t[i]==t[i+2])
            cout<<i<< " "<<i+2;

            else cout<<"-1"<< " "<< "-1";
    }
    return 0;
}
