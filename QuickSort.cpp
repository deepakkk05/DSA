//Pick the Pivot-> Place it on the correct place->Repeat for ther subarrays 

#include<bits/stdc++.h>
using namespace std;

int partition(int arr[] ,int low,int high)
{
    int pivot =arr[low];
    int i=low;
    int j=high;

    while(i<j)
    {
        while(i<=high&& arr[i]<=pivot)
        {
            i++;
        }
        while(j>=low&& arr[j]>pivot)
        {
            j--;
        }

        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[low]);
    return j;
}

void qs(int arr[],int low,int high)
{
    if(low<high)
    {

    int partion_index=partition(arr,low,high);
    qs(arr,low,partion_index-1);
    qs(arr,partion_index+1,high);

    }
}

int main()
{
    int arr[] ={3,4,56,4,3,6,45,7,6};
    int low= 0;
    int high = 8;

    qs(arr,low,high);

    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }

   

}