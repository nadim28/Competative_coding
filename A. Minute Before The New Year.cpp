#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t,h,m,Min;
 cin>>t;
 while(t--){
        cin>>h>>m;
 Min=h*60+m;
 if(Min<=1440){
    Min=1440-Min;
cout<<Min<<endl;
 }


}

        return 0;
}
