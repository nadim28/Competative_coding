#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
int q;
cin>>q;
while(q--){
    string s,t;
    cin>>s>>t;
    int l =s.size();
    bool ok=0;
    for(int i=0;i<l;i++){
            for(int j=0;j<l;j++){
                if(s[i]==t[j]){
                    ok=1;
                    }

            }

    }
    cout<< (ok?"Yes":"No")<<endl;


}
return 0;

}
