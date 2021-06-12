#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int  value=arr[0];
    int min=arr[0];
    for(int i=0;i<5;i++)

    {if(value<arr[i]){
    value=arr[i];}
    else if(min>arr[i])
    {
     min=arr[i];
    }

    }

        cout<<"Maximum is:"<<value<<endl;
        cout<<"Minimum is:"<<min<<endl;
    return 0;
}
