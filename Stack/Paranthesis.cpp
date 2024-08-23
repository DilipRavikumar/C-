#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string exp)
{
    stack<char> s;

    for (int i = 0; i < exp.length(); i++)
    {
        char ch = exp[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            // Push opening brackets onto the stack
            s.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            // If a closing bracket is encountered and the stack is empty, it's not balanced
            if (s.empty())
            {
                return false;
            }

            // Check for matching pair
            char top = s.top();
            if ((ch == ')' && top == '(') ||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '['))
            {
                s.pop(); // Pop the matched opening bracket from the stack
            }
            else
            {
                return false; // Mismatched pair
            }
        }
    }

    // If the stack is empty at the end, the expression is balanced
    return s.empty();
}

int main()
{
    string exp;

    // Ask the user to input the expression
    cout << "Enter the expression: ";
    cin >> exp;

    // Check if the expression is balanced
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
