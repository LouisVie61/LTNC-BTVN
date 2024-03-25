#include <bits/stdc++.h>

using namespace std;

struct student {
  int age;
  string f_name;
  string l_name;
  int standard;

  student(){};
  student(int _age, string _fname, string _lname, int _std)
  {
    age = _age;
    f_name = _fname;
    l_name = _lname;
    standard =  _std;
  }

  void print()
  {
    cout << age << " " << f_name << " " << l_name << " " << standard << '\n';
  }
};

int main() {

    int a, std;
    cin >> a;
    string f, l;
    cin >> f;
    cin >> l;
    cin >> std;
    student person(a, f, l, std);
    person.print();
    return 0;
}

