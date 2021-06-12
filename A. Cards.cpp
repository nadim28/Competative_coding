#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    //int l=s.length();
    int O=0,I=0,E=0,Z=0,R=0;
    for(int i=0;i<n;i++){
        if(s[i]== 'o')
        O++;
        else if(s[i]=='n')
        I++;
        else if(s[i]=='e')
        E++;
        else if(s[i]=='z')
        Z++;
        else
        R++;
    }
    for(int i=1;i<=I;i++){
    cout<<1<<" ";}
    for(int i=1;i<=Z;i++){
    cout<<0<<" ";}
    return 0;

}
