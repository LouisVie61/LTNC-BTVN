#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int a; cin >> a;
    double b; cin >> b;
    string text; getline(cin >> ws, text);

    cout << i + a << endl;
    cout << fixed << setprecision(1) << d + b << endl;
    cout << s << text << endl;

    return 0;
}
