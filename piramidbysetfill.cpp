#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    for (int i = 1; i <= n; i++) {
    cout << left << setfill(' ') << setw(n);
    cout <<string(i,'*') << endl;
    }
}
