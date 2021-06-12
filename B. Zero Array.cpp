#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int main(){
int n;
cin>>n;
int x;
 long long max=0;
 long long s=0;
for(int i=0;i<n;i++){
    cin>>x;
    s+=x;
    if(x>max){
        max=x;
    }


}

if ((s%2) ||s<max*2) {
    cout<< "No"<<endl;

}
else {
    cout<< "Yes"<<endl;
}

return 0;

}
