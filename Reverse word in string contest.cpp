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
    while (ss >> word) {
        vc.push_back(word); }
    reverse(vc.begin(), vc.end());
    int l=vc.size();
    for (int i = 0; i < l/2 ; ++i) {
        cout << vc[i] ;
    }


    return 0;
}


