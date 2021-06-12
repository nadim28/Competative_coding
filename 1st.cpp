#include<iostream>
using namespace std;
int main()
{
    int c,r,n;
    cout<<"enter the value of n";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(int c=1;c<=r;c++)
            cout<<c;
    cout<<endl;
    }
      for(r=n-1;r>=1;r--)
    {
        for(int c=1;c<=r;c++)
            cout<<c;
    cout<<endl;
    }


return 0;}
