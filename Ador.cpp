#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,h,w;
    cin>>t;
    while(t--)
    {
        cin>>h>>w;
        h=11-h + (w==0);.
        cout<<"h1"<<h<<endl;
        if(h<=0)
            h+=12;
        if(w!=0)
            w=60-w;
        printf("%02d:%02d\n",h,w);
    }
     return 0;
}


