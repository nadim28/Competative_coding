#include<bits/stdc++.h>
using namespace std;
int main(){
string s1,s2,s3;
getline(cin,s1);
getline(cin,s2);
string add= s1+s2;
getline(cin,s3);
sort(add.begin(),add.end());
sort(s3.begin(),s3.end());
if(add==s3){
    cout<< "YES";
}
else {
    cout<< "NO";
}

return 0;
}
