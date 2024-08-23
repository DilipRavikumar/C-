#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v1{1, 2, 3, 4, 0, 0, 0, 5, 4};
    int count = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] == 0)
        {
            count++;
        }
    }
    v1.erase(remove(v1.begin(),v1.end(),0),v1.end());
    for(int i=0;i<count;i++)
    {
        v1.push_back(0);
    }
    for(int x:v1)
    {
        cout <<x;
    }

}