#include<iostream>
using namespace std;
class number
{
private:
    int a;
public:
    void getnum(int x);
   friend void printnum(number NUM);

};
void number::getnum(int x)
{
    a=x;
}
void printnum(number NUM)
{
    cout<< "value of a"<<NUM.a<<endl;
}
int main()
{
    number fuck;
    fuck.getnum(500);
    printnum(fuck);
    return 0;

}









