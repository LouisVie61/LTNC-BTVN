#include <bits/stdc++.h>

using namespace std;


int main() {

    int q; cin >> q;
    set<int>se;
    while(q--)
    {
        int x, y; cin >> x >> y;
        if(x == 1) se.insert(y);
        else if(x == 2) se.erase(y);
        else if(x == 3)
        {
            if(se.find(y) != se.end()) cout << "Yes" << '\n';
            else cout << "No" << '\n';
        }
    }

    return 0;
}
