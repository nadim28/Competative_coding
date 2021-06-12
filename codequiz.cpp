#include<stdio.h>
#include<string.h>
int main(){
int arr[7]={80,00,3,10,10,0,1};
int sum=0;
for(int i=0;i<7;i++){
    sum=sum+arr[i];
}
printf("\n%d",sum);
return 0;
}
