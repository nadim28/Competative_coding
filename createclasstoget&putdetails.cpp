#include<iostream>
using namespace std;
class student
{
private:
    char name[20];
    int rollno;
    int total;
    float perc;
public:
    void getdetails();
    void putdetails();
};
void student::getdetails()
{
    cout<< "Enter name:";
    cin>> name;
    cout<< "Enter roll Number:";
    cin>>rollno;
    cout<< "Enter total marks out of 500:";
    cin>>total;
    perc=float(total)/500*100;
}
void student::putdetails()
{
    cout<< "student details:\n";
cout<< "Name:"<<name<<endl<<"roll Number:"<<rollno<<endl<< "Total:"<<total<<endl<< "percentage:"<<perc<<endl;
}
int main()
{
    student std;
    std.getdetails();
    std.putdetails();
    return 0;
}












