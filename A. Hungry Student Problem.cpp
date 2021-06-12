#include<bits/stdc++.h>
using namespace std;
int main(){
int t,x,ans;
 set<int>s;
cin>>t;
while(t--){
    cin>>x;


    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            int ans = (i * 3 + j * 7);
            if (ans == x)
            {
                s.insert(x);

            }
        }
    }
    if(s.count(x)==1){
        cout << "YES\n";


    }
    else if(s.count(x)==0){
    cout << "NO\n"; }
}

return 0;


}




