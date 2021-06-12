#include<bits/stdc++.h>
#define N ((int)1e9 + 5)
using namespace std;
int main()
{

    int n,sum=0,su=0,s=0;
    cin>>n;
    int arr[100][100];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];

        }
        sum+=arr[i][0];
            su+=arr[i][1];
            s+=arr[i][2];


    }
    if(sum==0 && su==0 && s==0)
    {
        cout<< "YES";
    }
    else
    {
        cout<< "NO";
    }

    return 0;


}
