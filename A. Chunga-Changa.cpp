#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int main(){
ll x, y, z;
cin >> x >> y >> z;
  ll ans = (x + y) / z;
  ll t = x / z + y / z;
  if(ans == t)
  {
    cout << ans <<" "<< 0 << "\n";
  }
  else
  {
    cout << ans <<" "<< min(z - x % z, z - y % z) << "\n";
  }
  return 0;
}
