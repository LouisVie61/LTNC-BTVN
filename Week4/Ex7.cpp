#include <bits/stdc++.h>
using namespace std;

const int N = 1007;
int f[N][N];

int main() {

    int w, h; cin >> w >> h;
    vector<string> s(h);
    for(int i = 0; i < h; ++i){
        cin >> s[i];
    }
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            f[i][j] = -1;
        }
    }
    for(int i = 0; i < w; ++i){
        if(s[0][i] == 'Y'){
            f[0][i] = 1;
            break;
        }
    }
    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            if(s[i][j] == 'R') f[i][j] = 0;
        }
    }
    for(int i = 1; i < h; ++i){
        for(int j = 0; j < w; ++j){
            if(f[i][j] != -1) continue;
            if(j == 0){
                if(f[i - 1][j] == 1) f[i][j] = 1;
                else if(f[i - 1][j + 1] == 1 && f[i - 1][j] != 0) f[i][j] = 1;
            }else if(j == w - 1){
                if(f[i - 1][j] == 1) f[i][j] = 1;
                else if(f[i - 1][j - 1] == 1 && f[i - 1][j] != 0) f[i][j] = 1;
            }else{
                if(f[i - 1][j] == 1)f[i][j] = 1;
                else if(f[i - 1][j - 1] == 1 && f[i - 1][j] != 0) f[i][j] = 1;
                else if(f[i - 1][j + 1] == 1 && f[i - 1][j] != 0) f[i][j] = 1;
            }
        }
    }
    bool ans = false;
    for(int i = 0; i < w; ++i){
        if(f[h - 1][i] == 1){
            ans = true;
            break;
        }else continue;
    }
    if(ans) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}
