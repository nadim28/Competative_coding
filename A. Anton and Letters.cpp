#include<bits/stdc++.h>
using namespace std;
int main(){
     int l,count=0;
    char s[10000];
    cin>>s;
    l=strlen(s);

sort(s,s+l);
    for(int i=0;i<l;i++){
            if(s[i]>96 && s[i]< 123){
                count++;
             if(s[i]==s[i+1])

                    count--;

            }
    }


cout<<count;
return 0;


}
