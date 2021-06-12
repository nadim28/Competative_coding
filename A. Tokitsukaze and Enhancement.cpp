#include<bits/stdc++.h>
using namespace std;
int main(){
int HP;
cin>>HP;
int r =(HP%4);
if(r==1) cout<< '0'<< " "<< "A";
if(r==2) cout<< '1'<< " "<< "B";
if(r==3) cout<< '2'<< " "<< "A";
if(r==0) cout<< '1'<< " "<< "A";
return 0;


}
