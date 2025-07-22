//Push the Largest element to the last by  : camparing nieghbour elements and swap if these two are not sorted 
//Repeat this for the remaining array
//First for loop from i : n-1 to 0 : second j : 0 to i-1;

#include <iostream>
using namespace std;

void Bubble_sort(int arr[],int n)

{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"After Sorted array : "<<endl;
    for (int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {3,6,3,5,76,3,5};
    int n=7;
    Bubble_sort(arr,n);
    
}