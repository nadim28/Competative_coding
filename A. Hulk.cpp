#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    1<=n<=100;
    cin>>n;
    string s= "I hate ";
    for( i=1;i<n;i++)
    {
    if(i%2!=0)
    {
    s=s+ "that I love ";
    }
    else{
    s=s+ "that I hate ";
    }


        }
        s=s+ "it";
        cout<< s<<endl;

    return 0;
}
