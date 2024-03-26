#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    int a1;
    int a2;
    int a3;
    int a4;
    int a5;
public:

    Student(int _a1,int _a2, int _a3, int _a4, int _a5 )
    {
        a1 = _a1;
        a2 = _a2;
        a3 = _a3;
        a4 = _a4;
        a5 = _a5;
    }

    int sumScore()
    {
        return a1 + a2 + a3 + a4 + a5;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    Student x(a, b, c, d, e);

    int TotalScore =  x.sumScore();
    int cnt = 0;
    for(int i = 2; i <= n; ++i){
        int m, n, p, q, r; cin >> m >> n >> p >> q >> r;
        Student y(m, n, p, q, r);
        int z = y.sumScore();
        if(z > TotalScore) cnt++;
    }
    cout << cnt << '\n';
    return 0;
}

