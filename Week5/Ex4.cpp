#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a;
    for(int i = 1; i <= n; i++){
        int num;  cin >> num;
        a.push_back(num);
    }
    int q; cin >> q;
    while(q--)
    {
        int n; cin >> n;
        int val = lower_bound(a.begin(), a.end(), n) - a.begin();

        if(n ==  a[val]) cout << "Yes" << " " << val + 1 << '\n';
        else cout << "No" << " " << val + 1 << '\n';
    }
    return 0;
}
