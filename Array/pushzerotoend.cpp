    #include <iostream>
    #include<string>
    using namespace std;
    int main()
    {
        int arr[]={1,2,0,0,0,5};
        int n=sizeof(arr)/sizeof(arr[0]);
        int nonzero=0;

        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                arr[nonzero]=arr[i];
                nonzero++;
            }
        }
        for(int i=nonzero;i<n;i++)
        {   
             arr[i]=0;
            
        }
        for(int i=0;i<n;i++)
        {
            cout<< arr[i]<<" ";
        }
    }