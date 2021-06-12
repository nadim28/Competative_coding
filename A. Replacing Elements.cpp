#include<bits/stdc++.h>
using namespace std;
int main(){
int t,
cin>>t;
int arr[100];
while (t--){
    int n,d;
    cin>>n>>d;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>d) {
                if(i!=n)
            sum=arr[i-1]+arr[i-2] ;
            else sum=arr[0]+arr[1];

            }

        }
    }

}



}
