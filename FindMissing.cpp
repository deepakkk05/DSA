//Find the missing no. in the array

#include<bits/stdc++.h>
using namespace std;

void missing(int arr[],int n)
{
    for(int i=1;i<n-1;i++)
    {
        if(arr[i-1]+1!=arr[i])
        {
            cout<<"Missing no is "<<arr[i-1]+1;
        }
    }
}

int main() {
    int arr[] = {1,2,4,5};
    int n=5;
    missing(arr,n);
}