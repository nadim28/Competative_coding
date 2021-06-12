#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,count=0;
    cin>>n;
    char c;
    for(int i=1;i<=n;i++){
        cin>>c;
        if(c=='1'){
            count++;
}

    }
    if(count> n/2){
        cout<< n*2<<endl;
    }
   else if(count>0){
        cout<< n+count<<endl;
    }
    else {
        cout<<n<<endl;
    }

count=0;

}


return 0;
}

