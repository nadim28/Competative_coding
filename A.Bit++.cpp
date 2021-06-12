#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int s=0;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
        if(arr[i]=="++X"|| arr[i]=="X++")
        {
             s=s+1;
        }
        else if(arr[i]=="--X"||arr[i]== "x--")
        {
             s=s-1;
        }
        }
    cout<<s<<endl;
    return 0;
}
