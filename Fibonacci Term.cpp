#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long

using namespace std;
int main(){
int fib[61];
fib[0]=0;
fib[1]=1;
for(int i=2;i<61;i++){
    fib[i]=fib[i-1]+fib[i-2];
}
ll t,n;
cin>>n;
while(n--) {
    cin>>t;
    cout<< "Fib("<< t <<")"<< " = "<< fib[t]<<endl;
}
return 0;
}

//cout << "Fib(" << n << ")" << " = " << fib[n] << endl;


