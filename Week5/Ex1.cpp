#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n1, n2; cin >> n1 >> n2;
    int *a = &n1, *b = &n2;
    int c = *a + *b;
    int d = abs(*a - *b);
    cout << c << '\n' << d << '\n';
    return 0;
}
