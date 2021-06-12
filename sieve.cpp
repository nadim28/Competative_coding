#include<bits/stdc++.h>
#define N ((int)(le6 + 5))
#define N ((int)(1e6 + 5))

using namespace std;
bool mark[N];
int main()
{
    int n;
    cin>>n;
    mark[1]=1;
    for(int i=2;i*i<=n;i++){
    if(mark[i]==0){
        for(int j=i+i;j<=n;j+=i)
        {
            mark[j]=1;
        }
    }}
    vector<int>prime;
    cout<< "Prime";
    for(int i=2;i<=n;i++){
        if(mark[i]==0) prime.push_back(i);}
       // if(i!=n/i) prime.push_back(n/i);
      for(int i=2;i<=n;i++){
        cout<<prime[i];
        //cout<<n/i;
        cout<<endl;
        }
        return 0;
}
