
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {

    ll n, k;
    queue<int> q;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    ll cnt = 0;
    int x = q.front();
    q.pop();
    while (cnt < k) {
        if(q.front() < x) {
            cnt++;
            q.pop();
        }
        else {
            x = q.front();
            q.pop();
            cnt = 1;
        }
        if(q.empty()) break;
    }
    cout << x;
}
