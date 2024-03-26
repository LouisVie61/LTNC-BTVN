#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p, res = INT_MAX;
    cin >> n >> p;
    if (n % 2 == 0) n++;
    res = min(p / 2, (n - p) / 2);
    cout << res;
    return 0;
}
