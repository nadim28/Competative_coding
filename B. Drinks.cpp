#include<bits/stdc++.h>
using namespace std;
int main()
         {
             float n,m,s=0;
             cin>>n;
             for(int i=0;i<n;i++){
                cin>>m;
                s=s+m;
             }
             float x=( s/n) ;
             cout<< x;
             return 0;

         }
