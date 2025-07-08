//Buble sort -> Find the Max element by looping in reverse arry -> Then put that max element in last


#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for(int i=(n-1);i>=0;i++)
    {
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout<<"Sorted Array through bubble sort: ";
    for(int i=0;i<=(n-1);i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {3,5,8,5,7,43,32,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr,n);
}