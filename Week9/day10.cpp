#include <bits/stdc++.h>

using namespace std;

int solve(int n){
    int res = 0;
    int cnt = 0;
    while (n != 0){
        if (n % 2 == 1) cnt++;
        else cnt = 0;
        res = max(res, cnt);
        n /= 2;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    cout << solve(n);
    return 0;
}

