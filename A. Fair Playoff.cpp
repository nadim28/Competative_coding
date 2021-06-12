#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
ios_base::sync_with_stdio(0),cin.tie(0);
int n,s1,s2,s3,s4,max,maxx,idx,idy,nidx,nidy;
cin>>n;
while(n--){
    cin>>s1>>s2>>s3>>s4;
    max= s1>s2?s1:s2;
    if(max==s1){
            idx=s2;
            nidx=s1;}
    else {
            idx=s1;
            nidx=s2;}

maxx= s3>s4?s3:s4;
if(maxx==s3) {
        idy=s4;
        nidy=s3; }
else {
        idy=s3;
        nidy=s4;
}


if(max>idy && maxx>idx){
    cout<< "Yes"<<endl;
}
else {
    cout<< "No"<<endl;
}


}
return 0;

}
