 #include<iostream>
using namespace std;
class Time
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    void gettime();
    void puttime();
    void addtime(Time T1, Time T2);
};
void Time::gettime()
{
    cout<< "Enter Time:"<<endl;
    cout<< "HOURS?";
    cin>> hours;
    cout<< "Minutes?";
    cin>> minutes;
    cout<< "seconds?";
    cin>>seconds;
}
void Time::puttime()

{cout<< "Time after add:"<<endl;
cout<<hours<< ":"<< minutes<< ":"<<  seconds<< ":"<<endl ;

}
void Time::addtime(Time T1,Time T2 )
{
    this->seconds= T1.seconds+T2.seconds;
    this-> minutes=T1.minutes+T2.minutes+ this->seconds/60;
     this->hours=T1.hours+T2.hours+ this->minutes/60;
    this->minutes%=60;
     this->hours%=60;
}
int main()
{
    Time T1,T2,T3;
    T1.gettime();
    T2.puttime();
    T3.addtime(T1,T2 );

return 0;
}
















