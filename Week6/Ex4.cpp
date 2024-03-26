#include <bits/stdc++.h>
using namespace std;

class Box
{
private:
    int l;
    int b;
    int h;
public:
    Box()
    {
        l = 0;
        b = 0;
        h = 0;
    }

    Box(int le, int br, int he)
    {
        l = le;
        b = br;
        h = he;
    }
    Box (const Box& B)
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }

    int getL()
    {
        return l;
    }
    int getB()
    {
        return b;
    }
    int getH()
    {
        return h;
    }
    int volume()
    {
        return l * b * h;
    }

    friend bool operator< (Box const& A, Box const& B){
        if( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.l) && (A.b == B.b)) ){
            return true;
        }else{
            return false;
        }
    }

    friend ostream& operator<< (ostream& output, const Box& B){
        output << B.l << " " << B.b << " " << B.h;
        return output;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    Box tmp;
    for(int i = 0; i < n; i++)
    {
        int type; cin >> type;
        if(type == 1){
            cout << tmp << endl;
        }
        else if(type == 2){
            int l, b, h;
            cin >> l >> b >> h;
            Box first(l, b, h);
            tmp = first;
            cout << tmp << endl;
        }
        else if(type == 3){
            int l, b, h;
            cin >> l >> b >> h;
            Box second(l, b, h);
            if(second < tmp) {
                cout << "LESSER\n";
            } else {
                cout << "GREATER\n";
            }
        }
        else if(type == 4){
            cout << tmp.volume() << endl;
        }
        else if(type == 5){
            Box third(tmp);
            cout << third << endl;
        }
    }
    return 0;
}
