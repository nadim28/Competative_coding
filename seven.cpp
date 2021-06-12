#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long

using namespace std;
int main(){
    int n;
float t,sum=0,avg;

cin>>t;
while(t--){
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    } avg=(sum/n);
    for(int i=0;i<n;i++){
        float x= arr[i]-avg;
        printf("%.2f",x);
        cout<< " ";
    }
    sum=0;
    avg=1;
cout<<endl;
}

return 0;

}
