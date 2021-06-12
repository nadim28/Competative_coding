#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int main(){
    int t,n,k,x,y,count=0;
    cin>>t;
    while(t--){
        //int n,k,x,y;
        vector<int>vec;
        cin>>n>>k;



            for(int i=k;i<=n;i+2){
                x=i;
                vec.push_back(x);
            }
            for(int i=1;i<=n;i+2){
                y=i;
                vec.push_back(y);
            }
            //int count =0;
            for(int i=1;i<=vec.size();i++) {
                if(vec[i]<vec[i+1]&& vec[i+1]>vec[i+2]){
                    count++;
                }
            }
            if(count==k){
                for(int i=1;i<=vec.size();i++){
                    cout<<vec[i]<<endl;
                }
            }
            else if(n==1){
                cout<<"1"<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }

        }



return 0;

}
