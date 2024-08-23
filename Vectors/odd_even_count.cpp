#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    vector<int> vec1={1,2,3,4,5};
    int n = vec1.size();
    int odd=0,even=0;

    for(int i=0;i<n;i++)
    {
        if(vec1[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
        
    }cout<<odd<<" "<<even;
}





