#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int>ans;
       int power=1;
       while(n>0){
       if(n%10>0)
       {
        ans.push_back((n%10)*power);
       }
        n/=10;
        power*=10;
       }
       cout<< ans.size() <<endl;
        for(int number : ans)
        {
            cout<<number<<" ";
        }
        cout<<endl;

        }


return 0;



}
