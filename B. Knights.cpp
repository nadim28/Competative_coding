#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
ios_base::sync_with_stdio(false),cin.tie(nullptr);

ll n;
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if((i+j)%2==0){
            cout<< 'W';
        }
        else{
            cout<< 'B';
        }

    }
    cout<<endl;
}

return 0;

}
