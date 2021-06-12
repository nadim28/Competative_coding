#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a;
        scanf( "%d",&a);
        vec.push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",vec[i]);
    }
    return 0;
}
