#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long

using namespace std;
int main()
{
    fastio;
int n,x,y,pos,po;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
x=*min_element (arr,arr+n);

y= *max_element (arr, arr+n);
for(int i=0;i<n;i++){
    if(arr[i]==x){
        pos=i;
    }
   else if(arr[i]==y){
         po=i;
    }
}

cout<<"lowest value:"<<x<<endl;

cout<< "position:"<<pos+1<<endl;
cout<< "highest value:"<<y<<endl;
cout<< "position:"<<po+1<<endl;



return 0;
}

