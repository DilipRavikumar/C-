    #include <iostream>
    using namespace std;

    int main()
    {
        const int n1 = 5;
        const int n2 = 5;
        const int n3 = n1 + n2;

        int arr1[n1] = {1, 3, 5, 7, 9};
        int arr2[n2] = {2, 4, 6, 8, 10};

        int arr3[n3];
        int i = 0, j = 0, k = 0;

        for (; i < n1 && j < n2; k++)
        {
            if (arr1[i] <= arr2[j])
            {
                arr3[k] = arr1[i++];
            }
            else
            {
                arr3[k] = arr2[j++];
            }
        }

        for(;i<n1;i++,k++)
        {
            arr3[k]=arr1[i];
        }
        for(;j<n2;j++,k++)
        {
            arr3[k]=arr2[j];
        }

        for(int l=0;l<n3;l++)
        {
            cout<<arr3[l];
        }
    }
