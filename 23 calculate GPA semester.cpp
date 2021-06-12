#include<iostream>

using namespace std;

void count_gpa(int&);
void count_cgpa(int&);

main()
{
 int p;
 cout<<"Enter the semester : ";
 cin>>p;
 if (p==1){
 count_gpa(p);
 }
 else if (p!=1){
 count_cgpa(p);
 }
}
void count_gpa(int &p){
 int subjects;
 float marks[10],crdthors[10],pointsum,horsum,gpa;
 cout<<"Enter the number of subjects of semester "<<p<<" : ";
 cin>>subjects;
 for(int i=1;i<=subjects;i++){
 cout<<"Enter marks of subject "<<i<<" : ";
 cin>>marks[i];
 if(marks[i]<50){
  cout<<"Student is fail.";
 }
 if(marks[i]>=50&&marks[i]<=55){
  cout<<"Enter its credit hours : ";
  cin>>crdthors[i];
  marks[i]=1.7*crdthors[i];
 }
 if(marks[i]>=56&&marks[i]<=60){
  cout<<"Enter its credit hours : ";
  cin>>crdthors[i];
  marks[i]=2*crdthors[i];
 }
 if(marks[i]>=61&&marks[i]<=65){
  cout<<"Enter its credit hours : ";
  cin>>crdthors[i];
  marks[i]=2.3*crdthors[i];
 }
 if(marks[i]>=66&&marks[i]<=70){
  cout<<"Enter its credit hours : ";
  cin>>crdthors[i];
  marks[i]=2.6*crdthors[i];
 }
 if(marks[i]>=71&&marks[i]<=75){
  cout<<"Enter its credit hours : ";
  cin>>crdthors[i];
  marks[i]=2.9*crdthors[i];
 }
 if(marks[i]>=76&&marks[i]<=80){
  cout<<"Enter its credit hours : ";
  cin>>crdthors[i];
  marks[i]=3.2*crdthors[i];
 }
 if(marks[i]>=81&&marks[i]<=85){
  cout<<"Enter its credit hours : ";
  cin>>crdthors[i];
  marks[i]=3.5*crdthors[i];
 }
 if(marks[i]>=86&&marks[i]<=89){
  cout<<"Enter its credit hours : ";
  cin>>crdthors[i];
  marks[i]=3.8*crdthors[i];
 }
 if(marks[i]>=90){
  cout<<"Enter its credit hours : ";
  cin>>crdthors[i];
  marks[i]=4*crdthors[i];
 }
}
for(int i=1;i<=subjects;i++){
 pointsum=pointsum+marks[i];
 horsum=horsum+crdthors[i];
}
gpa=pointsum/horsum;
if(p==1){
  cout<<"\nGPA : "<<gpa;
 }
}

void count_cgpa(int &p){
 int subjects;
 float pointsum,horsum,lastgpa[10],lastcrdt[10],lastgrade[10],sumlastgrade,sumlastcrdt,cgpa;
 for(int i=1;i<p;i++){
  cout<<"Enter the GPA of semester "<<i<<" : ";
  cin>>lastgpa[i];
  cout<<"Enter the total credit hours of semester "<<i<<" : ";
  cin>>lastcrdt[i];
  lastgrade[i]=lastgpa[i]*lastcrdt[i];
 }
 for(int i=1;i<p;i++){
  sumlastgrade=sumlastgrade+lastgrade[i];
  sumlastcrdt=sumlastcrdt+lastcrdt[i];
 }
 count_gpa(p);
 cgpa=(pointsum+sumlastgrade)/(horsum+sumlastcrdt);
 cout<<"CGPA of semester "<<p<<" : "<<cgpa;
}
