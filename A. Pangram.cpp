#include<bits/stdc++.h>
using namespace std;
int main(){
set<char>s;
int n;
char ch;
cin>>n;
while(n--){
        cin>>ch;
        s.insert(tolower(ch));

}
if(s.size()==26) cout<< "YES";
else cout<< "NO";

return 0;
}
