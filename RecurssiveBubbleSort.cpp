//Just change the first for loop which is for the selaction the overall range of the array;

#include<bits/stdc++.h>
using namespace std;

void RecurssiveBubbleSort(int arr[],int n)
{
    if(n==1) return;

    int didswap=0;

    
    for(int j=0;j<=n-2;j++)
    {
        if(arr[j]>arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] =temp;
            didswap++;
        }
    }
    if(didswap==0) return;

    RecurssiveBubbleSort(arr,n-1);
}

int main(){
    int arr[] ={ 3,4,6,45,2,43,6};
    int n =sizeof(arr) / sizeof(arr[0]);;
    RecurssiveBubbleSort(arr,n);

    cout<<"Sorted Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}