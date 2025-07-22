//Just change the first loop to recursion

#include<bits/stdc++.h>
using namespace std;

void RecurssiveInsertionSort(int arr[] , int i,int n)
{
    if(n==i) return ;
    int j=i;
    while(j>0 && arr[j-1]>arr[j])
    {
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] =temp;
        j--;
    }

    RecurssiveInsertionSort(arr,i+1,n);
}

int main(){
    int arr[] = {2,3,6,7,4,7,8,4};
    int n =8;

    RecurssiveInsertionSort(arr,0,n);
    
    cout<<"Sorted Array: "<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}