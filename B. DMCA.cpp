#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

int main()
{
    dtype n;
    cin>>n;
    dtype sum=n;
    while (n>=10)
    {
        sum=0;
        while(n)
        {
            sum+=n%10;
            n/=10;
        }
      n=sum;
    }

    cout<<sum<<endl;

    return 0;
}
