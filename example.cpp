#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string exp)
{
    stack<char> s;
    for (int i = 0; i < exp.length(); i++)
    {
        char ch = exp[i];
        {
            if (ch == '(' || ch == '[' || ch == '{')
            {
                s.push(ch);
            }
            else
            {
                if (s.empty())
                {
                    return false;
                }

                char top = s.top();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '['))
                {
                    s.pop();
                }
                else{
                    return false;
                }
            }
        }
    }
    return s.empty();
}
int main()
{
    string exp;

    cout << "Enter the Expression";
    cin >> exp;
        if (isBalanced(exp))
    {
        cout << "balanced" << endl;
    }
    else
    {
        cout << "not balanced" << endl;
    }

    return 0;
}