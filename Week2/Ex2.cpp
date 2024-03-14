#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'kangaroo' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER x1
 *  2. INTEGER v1
 *  3. INTEGER x2
 *  4. INTEGER v2
 */

string kangaroo(int pos1, int speed1, int pos2, int speed2)
{
    string yes = "YES";
    string no = "NO";
    int difference = abs(pos1 - pos2);
    if (difference == 0 && speed1 != speed2)
    {
        pos1 = pos1 + speed1;
        pos2 = pos2 + speed2;
        difference = abs(pos1 - pos2);
    }
    else if (difference == 0 && speed1 == speed2)
    {
        return yes;
    }
    if ((pos1 > pos2 && speed1 > speed2) || (pos2 > pos1 && speed2 > speed1))
    {
        return no;
    }
    else
    {
        for (int i = 0; i < difference; ++i)
        {
            pos1 = pos1 + speed1;
            pos2 = pos2 + speed2;
            if (pos1 == pos2)
            {
                return yes;
            }
        }
        if (pos1 != pos2)
        {
            return no;
        }
    }
    return no;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int x1 = stoi(first_multiple_input[0]);

    int v1 = stoi(first_multiple_input[1]);

    int x2 = stoi(first_multiple_input[2]);

    int v2 = stoi(first_multiple_input[3]);

    string result = kangaroo(x1, v1, x2, v2);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
