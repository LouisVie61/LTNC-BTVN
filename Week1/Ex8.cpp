#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, t;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        int prefix_sum[a + 1];
        prefix_sum[0] = 0;
        for (int j = 0; j < a; j++){
            cin >> t;
            prefix_sum[j + 1] = prefix_sum[j] + t;
        }
        int fl = 0;
        for (int j = 1; j <= a; j++){
            if (prefix_sum[j - 1] == prefix_sum[a] - prefix_sum[j]){
                cout << "YES" << endl;
                fl = 1;
                break;
            }
        }
        if (!fl) cout << "NO" << endl;
    }
    return 0;
}
