#include<bits/stdc++.h>
//#define N ((int)2e6 + 5)
#define ll long long
using namespace std;

int main(){

	 ll x,y,i,j;
	 cin>>x;

	 	vector<ll>v;v.clear();
	 	for(i=0;i<2*x;i++){
	 		cin>>y;v.push_back(y);
		 }
		 sort(v.begin(),v.end());
		 ll sum_n1=0,sum_n2=0;
		 for(i=0;i<2*x;i++){
		 	if(i<x){
		 		sum_n1+=v[i];
			 }
			 if(i>=x){
			 	sum_n2+=v[i];
			 }
		 }
		 if(sum_n1!=sum_n2){
		 	for(i=0;i<2*x;i++){
		 		cout<<v[i]<<" ";
			 }
			 cout<<endl;
		 }
		 else{
		 	cout<<"-1"<<endl;
		 }
		 return 0;
	 }

