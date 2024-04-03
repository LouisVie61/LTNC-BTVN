#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n; cin >> n;
    if(n%2==1) cout << "Weird\n";
    else if(n % 2 == 0 && (n >= 2 && n <= 5)) cout << "Not Weird\n";
    else if(n % 2 == 0 && (n > 6 && n <= 20)) cout << "Weird\n";
    else if(n % 2 == 0 && n > 20) cout << "Not Weird\n";
}

int main()
{
    solve();
    return 0;
}
