#include<iostream>
using namespace std;
int main()
{
    int n,c,r;
    cout<<"enter the value of n:";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
          if(r==1||c==1||c==n||r==n)
          cout<<"*";
          else
            cout<<" ";

        }            cout<<endl;

    }return 0;
}
