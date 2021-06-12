#include <bits/stdc++.h>

using namespace std;
#define dtype long long
#define endl "\n"


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    dtype t;
    cin >> t;
    while (t--) {
      dtype n,m,x;
      cin>>n>>m>>x;
      swap(n,m);
      dtype z=x%m==0?m:x%m;
      dtype y=(x+m-1)/m+z*n-n;
      cout<<y<<endl;

    }

    return 0;
}
