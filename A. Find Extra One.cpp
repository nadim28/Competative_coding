#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int x,y;
vector<int>s1;
vector<int>s2;
int i=1,j=1;
while(n--){
cin>>x>>y;
if(x>0) {
    s1.push_back(i++);
}
else if(x<0){ s2.push_back(j++); }
}
if(s1.size()<=1 || s2.size()<=1) {
    cout<< "Yes";

}
else { cout<< "No";}

return 0;


}
