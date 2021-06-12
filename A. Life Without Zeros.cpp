#include<bits/stdc++.h>
using namespace std;
int main(){
string a,b,d;
cin>>a>>b;
int c= stoi(a)+stoi(b);
 d= to_string(c);
string aa,bb,cc;
for(auto i : a){
    if(i!='0'){
        aa+=i;
    }
}
for(auto i : b){
    if(i!='0'){
        bb+=i;
    }
}
for(auto i : d){
    if(i!='0'){
        cc+=i;
    }
}

cout << (stoi(bb) + stoi(aa) == stoi(cc) ? "YES" : "NO") << "\n";
return 0;

}
