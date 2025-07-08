//Find the Min element-> Put it in front -> Repeat same for remaining array 

#include<bits/stdc++.h>
using namespace std;


void Selection_sort(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
        int min =i;
        for(int j=i+1;j<=n-1;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    cout<<"After Sorting the array :  ";
    for(int i=0;i<=n-1;i++)
    {
       cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[]= {3,6,4,6,28,4};
    int n=6;

    Selection_sort(arr,n);

}

