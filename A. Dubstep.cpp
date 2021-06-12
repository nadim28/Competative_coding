#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
int l=s.size();
for(int i=0;i<l;i++){
    if(s[i]== 'W'&&s[i+1]=='U'&& s[i+2]=='B'){
           cout<<" ";
    i+=2;
        }

        else{
    cout<<s[i];
 }

}


return 0;

}
