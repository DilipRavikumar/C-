#include <iostream>
using namespace std;

int main()
{
    int first = 0;
    int second = 1;
    int next;
    int n = 10;
    if (n == 0)
    {
        cout << first;
    }
    else if (n == 1)
        
    {
        cout << second;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            next = first + second;
            cout << next<<" ";
            first = second;
            second = next;
        }

    }
}