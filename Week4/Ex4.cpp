#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> a;

    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        vector<int> current;
        for (int j = 0; j < s; j++)
        {
            int cur_element;
            cin >> cur_element;
            current.push_back(cur_element);
        }
        a.push_back(current);
    }

    int r, c;
    vector <int> ans;
    for (int i = 0; i < q; i++)
    {
        cin >> r >> c;
        ans.push_back(a[r][c]);
    }

    for (int i = 0; i < q; i++)
        cout << ans[i] << endl;

    return 0;
}
