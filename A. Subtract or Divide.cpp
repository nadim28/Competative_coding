#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,x,count=0;
cin>>t;
while(t--){
    cin>>n;

    if(n==1){cout<<0<<endl; }
    else if(n==2){cout<<1<<endl;}
    else if(n==3){cout<<2<<endl;}
    else{
        if(n%2==0){

            x= n/(n/2);
            count++;
            if(x==2){
                    x=x-1;
                count++;
            }
            cout<<count<<endl;
            count=0;
            }
        else{
            x=n-1;
            count++;
            if(x%2==0){
            x=n/(n/2);
            count++;
            if(x==2){
                count++;
                cout<<count<<endl;
                count=0;
            }

        }

    }
}
}
return 0;

}
