#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
   cin>>k;

   int i=12;
   int arr[i];
   for(int j=0;j<i;j++)
   {
    cin>>arr[j];
   }
   if(k==0){
        cout<<0<<endl;
     }
  else {
   int count=0;
   int sum=0, flag=0;
   sort(arr,arr+i);
   for(int j=i-1;j>=0;j--)
   {
    sum=sum+arr[j];
    count++;
       if(sum>=k)
       {
           flag=1;
          break;
       }

   }
   if(flag==1)
   {
       cout<< count<<endl;
   }
   else{
    cout<<-1<<endl;
   }


return 0;
  }
}
