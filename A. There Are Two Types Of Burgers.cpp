#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,n,m;
    cin>>t;
    while(t--)
    { int sum=0;
        cin>>a>>b>>c;
        a/=2;
        cin>>n>>m;
        if(a)
        {

            if(n>m)
            {
                if(a>b)
                {
                    a-=b;
                }
                else
                {
                    b=a;
                    a=0;
                }
                sum+=n*b;
                if(a>c)
                {
                    a-=c;
                }
                else
                {
                    c=a;
                    a=0;
                }
                sum+=m*c;
            }


            else
            {
                if(a>c)
                {
                    a-=c;
                }
                else
                {
                    c=a;
                    a=0;
                }
                sum+=m*c;
                if(a>b)
                {
                    a-=b;
                }
                else
                {
                    b=a;
                    a=0;
                }
                sum+=n*b;
            }
}

        cout<< sum<<endl;
    }
    return 0;
}
