#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
   int n,x;
   cin>>n>>x;
   if(n<3) cout<< '1'<<endl;
   else{
        n-=2;
        if(n%x==0){
    float div= (n/x) +1 ;
    cout<< div<<endl;
    }
    else{
            float div=(n/x)+2;
    cout<< div<<endl;

   }

}

}return 0;
}


