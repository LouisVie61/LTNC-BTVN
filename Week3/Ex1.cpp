#include <iostream>
#include <string>
using namespace std;
void solve()
{
    string a, b; cin >> a; cin >> b;
    string c = a + b;
    string d = b[0] + a.substr(1);
    string e = a[0] + b.substr(1);
    int len1 = a.size();
    int len2 = b.size();
    cout << len1 << " " << len2 << endl;
    cout << c << endl;
    cout << d << " " << e << endl;
}
int main()
{
    int t = 1;
    while(t--) {
        solve();
        cout << endl;
    }
    return 0;
}
