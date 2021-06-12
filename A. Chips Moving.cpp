#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main(){

int n,count=0,cou=0;
cin>>n;
while(n--){
    int x;
    cin>>x;
    if(x%2==0)
    count++;
    else
        cou++;
}
cout<<min(count,cou)<<endl;
return 0;


}
