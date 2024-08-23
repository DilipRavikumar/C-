#include <iostream>
#include<algorithm>
using namespace std;



int main ()
{
    int arr[10];
    int a;
    cin >> a;
    int target=a;

    for(int i=0;i<sizeof(arr);i++)
    {
        for(int j=i+1;sizeof(arr);j++)
        {
            if(target==((arr[i])+(arr[j])))
            {
                cout <<i<<" "<<j<<endl;
            }
        }

        }
    }
