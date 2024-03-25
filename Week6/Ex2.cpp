#include <bits/stdc++.h>
using namespace std;

class Student{
    int a;
    string f;
    string l;
    int s;
    public:
        Student (int _a, string _f, string _l, int _s){
            a = _a;
            f = _f;
            l = _l;
            s = _s;
        }
        int get_age(){
            return a;
        }
        string get_first_name(){
            return f;
        }
        string get_last_name(){
            return l;
        }
        int get_standard(){
            return s;
        }
        void print_part1(){
            cout << l << ", " << f << '\n';
        }
        void print_part2(){
            cout << to_string(a) << "," << f << "," << l << "," << to_string(s) << '\n';
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x; cin >> x;
    string y, z; cin >> y >> z;
    int t; cin >> t;
    Student person(x, y, z, t);
    int num1 = person.get_age();
    int num2 = person.get_standard();
    cout << num1 << '\n';
    person.print_part1();
    cout << num2 << '\n';
    cout << '\n';
    person.print_part2();
    return 0;
}
