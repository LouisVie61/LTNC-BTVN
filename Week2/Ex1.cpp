#include <iostream>
#include <stack>

using namespace std;

void countNum()
{
    string n; cin >> n;
    int len = n.size();

    stack<int> st;
    for(int i = 0; i < len; i++)
    {
        if(isdigit(n[i]) && n[i] != '0')
        {
            st.push((n[i] - 48));
        }
    }
    int tmp_value = stoi(n);
    int cnt(0);
    while(!st.empty())
    {
        if(tmp_value % st.top() == 0)
        {
            cnt++;
        }
        st.pop();
    }
    cout << cnt << endl;
}

int main()
{
    int tc; cin >> tc;
    while(tc--)
    {
        countNum();
    }
    return 0;
}
