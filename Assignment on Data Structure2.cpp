//Nadim Ibne Akhtar
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
    int numbers[5];

    cout << "Enter 5 numbers: " << endl;
//  store input from user to array
    for(auto &n:numbers)
    {
        cin>>n;
    }
    cout << "The numbers are: ";
//  print array elements

    for (int n = 0; n < 5; ++n)
    {
        cout << numbers[n] << "  ";
    }

    return 0;
}
