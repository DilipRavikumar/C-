#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 5;
    int num = 1;
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == 5 || j == 1 || j == 4)
            {
                cout << "$"<<" " ;
            }
            else{
                cout <<"   ";
            }
        }
        cout << endl;
    }
}
