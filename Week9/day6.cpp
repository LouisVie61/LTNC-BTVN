#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;
    while(tc--)
    {
        string s; cin >> s;
        string evenIndex, oddIndex;
        for(int i = 0; i < s.size(); i++)
        {
            if(i % 2 == 0)
            {
                evenIndex += s[i];
            }
            else
            {
                oddIndex += s[i];
            }
        }
        cout << evenIndex << " " << oddIndex << "\n";
    }
    return 0;
}
