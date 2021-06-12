#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr[2];
    for(int i=0;i<2;i++)
    {
        cin>>arr[i];
        transform(arr[i].begin(),arr[i].end(),arr[i].begin(),::toupper);
    }

if (arr[0]<arr[1])
{
    cout<< -1<<endl;
}
else if (arr[0]>arr[1])
{
    cout<< 1<<endl;
}
else
{
    cout<<0<<endl;
}



return 0;


}
