#include<bits/stdc++.h>
using namespace std;
int main(){
int n,count=0;
string s;
cin>>n;
while(n--){
        cin>>s;
if(s=="Icosahedron") count=count+ 20;
else if(s=="Cube") count=count+ 6;
else if(s=="Tetrahedron") count=count+ 4;
else if(s=="Dodecahedron") count=count+ 12;
else if(s=="Octahedron") count=count+ 8;

}
cout<<count;
return 0;


}

