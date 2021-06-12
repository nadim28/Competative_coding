#include<iostream>
using namespace std;
int main()
{
    int n,r,c;
    cout<<"enter the value of n:";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
            cout<<"*";
        cout<<endl;
    }
}
