#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector <int> a;
    for(int i = 0; i < n; i++)
    {
        int num;cin >> num;
        a.push_back(num);
    }


    int q1; cin >> q1;
    int q2, q3; cin >> q2 >> q3;

    a.erase(a.begin() + q1 - 1);
    a.erase(a.begin() + q2 - 1, a.begin() + q3 - 1);
    int len = a.size();
    cout << len << '\n';
    for(auto x : a)
    {
        cout << x << " ";
    }
    return 0;
}
