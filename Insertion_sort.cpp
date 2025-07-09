// Pick the elements one by one and place then in a sorted way 

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for(int i=0;i<=n-1;i++)
    {
        int j=i;
        while(j>0&&arr[j]<arr[j-1])
        {
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }

    cout<<"Sorted array through Insertion sort : "<<endl;
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
      cout << "Starting sort..." << endl;

    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr,n);
}