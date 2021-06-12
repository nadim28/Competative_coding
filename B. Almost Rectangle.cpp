#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string str[n];
    vector<pair<int,int>>vec;
    for(auto&i:str){
        cin>>i;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(str[i][j]== '*'){
               vec.emplace_back(i,j);
                }}
    }

    if(vec[0].first==vec[1].first){

    str[vec[0].first+1<n?vec[0].first+1:vec[0].first-1] [vec[0].second]= '*';
     str[vec[1].first+1<n?vec[1].first+1:vec[1].first-1] [vec[1].second]= '*';

    }

    else if(vec[1].second==vec[0].second){

   str [vec[0].first] [vec[0].second+1<n?vec[0].second+1:vec[0].second-1] = '*';
    str[vec[1].first]  [vec[1].second+1<n?vec[1].second+1:vec[1].second-1] = '*';


    }
    else{
        str[vec[0].first][vec[1].second]= '*';
        str[vec[1].first][vec[0].second]= '*';


    }
    for(auto i:str){
        cout<<i<<endl;
    }



}


return 0;
}
