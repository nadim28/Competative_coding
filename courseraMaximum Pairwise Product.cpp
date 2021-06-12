#include<bits/stdc++.h>
#define ll long long
using namespace std;
int mpp(const vector<int>&numbers)
{
    int result=0;
    int n=numbers.size();
    for( ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            if(((int)numbers[i])*numbers[j]>result) result=((int)numbers[i])*numbers[j];
        }
    }
    return result;
}
int main()
{
    int n;
    cin>>n;
    vector<int>numbers(n);
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    int result=mpp(numbers);
    cout<<result;
    return 0;
}
