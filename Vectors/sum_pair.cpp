#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int count=0;
    for(int i=0;i<arr.size();i++)
    {
        for (int j=i+1;j<arr.size();j++)
        {
            for(int k=0;k<arr.size();k++)
            {
            if(arr[i]+arr[j]==arr[k])
            {
                count++;
            }}
        }
    }
    cout<< count;

}
