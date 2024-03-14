#include<bits/stdc++.h>
using namespace std;

int main(){
    string a; cin>>a;
    stringstream ss(a);
    string time;
    char b;
    int h,m,s;
    ss>>h>>b>>m>>b>>s>>time;
    if(h==12){
        if(time=="AM"){
            h=0;
        }
    }else {
        if(time=="PM"){
            h+=12;
        }
    }
    b=':';
    cout<<setw(2) << setfill('0') << h<<b<<setw(2)<<setfill('0')<<m<<b<<setw(2)<<setfill('0')<<s;

}
