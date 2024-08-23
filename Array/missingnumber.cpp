#include<iostream>
using namespace std;
int main()
{
    int arr[]={9,6,4,2,3,5,8,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
    int k = (n * (n + 1)) / 2;
    cout<<k<<endl;
    int miss=k-sum;
    cout<<miss;
}