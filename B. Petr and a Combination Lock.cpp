#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3];
    int n;
    cin>>n;
    while(n--)
    {
        cin>>arr[3];
    }
    if(((arr[0]+arr[1])-arr[2])==0 ||((arr[0]+arr[2])-arr[1])==0|| ((arr[1]+arr[2])-arr[0])==0){
        cout<< "YES";}
    else if(arr[0]+arr[1]+arr[3]==360 )
    {
       cout<< "YES";
    }
    else{cout<< "NO";}
        return 0;
}
