#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n; cin >> n;
    vector <int> a;
    for(int i = 0;  i < n; i++)
    {
        int num; cin >> num;
        a.push_back(num);
    }
    sort(a.begin(), a.end());
    for(auto x : a)
    {
        cout << x << " ";
    }
    return 0;
}
