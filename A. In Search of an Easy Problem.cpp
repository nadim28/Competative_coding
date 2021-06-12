#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            c++;
        }

    }
    if(c>0)
        cout<< "HARD";
    else
    {
        cout<< "EASY";
    }
    return 0;

}
