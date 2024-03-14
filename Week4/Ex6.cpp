#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    while(b > 0){
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int lcm(int a, int b){
    return a * (b / gcd(a, b));
}

int main()
{
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int bc = a[0];
    for(int i = 1; i < n; i++)
    {
        bc = lcm(bc, a[i]);
    }

    int uc = b[0];
    for(int i = 1; i < m; ++i){
        uc = gcd(uc, b[i]);
    }
    int cnt = 0;
    for(int i = bc; i <= uc; i += bc)
    {
        if(uc % i == 0)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
