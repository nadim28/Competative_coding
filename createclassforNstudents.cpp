#include<iostream>
using namespace std;
class student
{
private:
    char name[20];
    int rollNo;
    int total;
    int perc;
public:
    void getdetails();
    void putdetails();
};
void student::getdetails()
{
    cout<< "Enter name:";
    cin>>name;
    cout<< "Enter Roll No:";
    cin>>rollNo;
    cout<< "Enter marks out of 500:";
    cin>>total;
    perc=float(total)/500*100;
}
void student::putdetails()
{
    cout<< "Enter student details:\n";
    cout<<"NAME"<<name<< "ROLL NO:"<<rollNo<< "TOTAL"<<total<< "percantage"<<perc;
}
int main()
{
    student std[3];

    int n,loop;
    cout<< "enter total number of student:";
    cin>>n;
    for(loop=0;loop<n;loop++)
    {
        //cout<< "Enter details of student"<<  loop+1<< ":\n";
loop+1;
        std[loop].getdetails();
    }
    cout<<endl;
    for(loop=0;loop<n;loop++)
    {
        cout<< "Enter details of student:"<<loop+1<< ":\n";
        std[loop].putdetails();
    }
    return 0;
}























