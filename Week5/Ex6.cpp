#include <bits/stdc++.h>

using namespace std;


int main() {
    map<string, int> mp;
    int q; cin >> q;
    while(q--){
        int k; cin >> k;
        if(k == 1){
            string s; cin >> s;
            int p; cin >> p;
            mp[s] += p;
        }else if(k == 2){
            string s; cin >> s;
            mp.erase(s);
        }else if(k == 3){
            string s; cin >> s;
            cout << mp[s] << '\n';
        }
    }
    return 0;
}
