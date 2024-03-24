#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1005;
int arr[MAXN][MAXN];
int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i = 0; i < h; i++) {
        cin >> s[i];
    }
    for(int i = 0; i < MAXN; i++) {
        for(int j = 0; j < MAXN; j++) {
            arr[i][j] = -1;
        }
    }
    for(int i = 0; i < w; i++) {
        if(s[0][i] == 'Y') {
            arr[0][i] = 1;
            break;
        }
    }
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(s[i][j] == 'R')
                arr[i][j] = 0;
        }
    }
    for(int i = 1; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(arr[i][j] != -1) continue;
            if(j == 0) {
                if(arr[i - 1][j] == 1) arr[i][j] = 1;
                else if(arr[i - 1][j + 1] == 1 && arr[i - 1][j] != 0) arr[i][j] = 1;
            }
            else if(j == w - 1) {
                if(arr[i - 1][j] == 1) arr[i][j] = 1;
                else if (arr[i - 1][j - 1] == 1 && arr[i - 1][j] != 0) arr[i][j] = 1;
            }
            else {
                if(arr[i - 1][j] == 1) arr[i][j] = 1;
                else if(arr[i - 1][j + 1] == 1 && arr[i - 1][j] != 0) arr[i][j] = 1;
                else if(arr[i - 1][j - 1] == 1 && arr[i - 1][j] != 0) arr[i][j] = 1;
            }
        }
    }
    bool reached = false;
    for(int i = 0; i < w; i++) {
        if(arr[h - 1][i] == 1) {
            reached = true;
            break;
        }
    }
    if(reached) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
