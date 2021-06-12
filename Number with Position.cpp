#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long

using namespace std;

int main() {
    string str, word;
    getline(cin, str);
    stringstream ss(str);
    vector<string> vc;
    while (ss >> word)
        vc.push_back(word);
    reverse(vc.begin(), vc.end());
    for (int i = 0; i < vc.size() - 1; ++i) {
        cout << vc[i] << " ";
    }
    cout << vc.back() << endl;


    return 0;
}
