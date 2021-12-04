#include <bits/stdc++.h>
using namespace std;
bool areBracketsBalanced(string expr)
{
    stack<char> s;
    char x;

    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
        {

            s.push(expr[i]);
            continue;
        }

        if (s.empty())
            return false;

        switch (expr[i])
        {
        case ')':

            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':

            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':

            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }

    return (s.empty());
}

int main()
{
    int testnum;
    cin >> testnum;
    for (int testcase = 1; testcase <= testnum; testcase++)
    {
        string test;
        cin >> test;
        int ans = areBracketsBalanced(test);
        if (ans == 0)
            cout << "Not Valid" << endl;
        else
            cout << "Valid" << endl;
    }
}