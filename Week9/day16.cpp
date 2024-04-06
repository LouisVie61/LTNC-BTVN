#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    try {
        cout << stoi(s) << endl;
    } catch (invalid_argument) {
        cout << "Bad String";
    }

    return 0;
}

