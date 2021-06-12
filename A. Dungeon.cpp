#include<bits/stdc++.h>
using namespace std;
int  main(){
    long long t,a,b,c,sub;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        sub=(a-1)+(b-1)+(c-1);
        if((sub+1)<7) cout<< "NO"<<endl;
        else if((sub+1)%7==0) cout<< "YES"<<endl;
        else cout<< "NO"<<endl;



    }
    return 0;

}
