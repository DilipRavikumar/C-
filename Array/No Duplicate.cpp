#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[12] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 8, 8};
    int n = sizeof(arr) / arr[0];
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag=false;
            }
            
        }
        if(flag==true)
        {
        cout << arr[i];   
    } }  
}
