#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[] = {3, 5, 1, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }
    cout << max1;
    cout << max2<<endl;
    int producr=max1 * max2;
    cout<< producr;
}
