#include<bits/stdc++.h>
using namespace std;
int main(){
int hh,mm,h,m;
char ch;
cin>>hh>>ch>>mm;
cin>>h>>ch>>m;
int r =((hh+h)*60+mm+m)/2;

 cout<<setfill('0')<<setw(2)<< r/60 <<ch<<setfill('0')<<setw(2)<<r%60<<endl;
return 0;



}
