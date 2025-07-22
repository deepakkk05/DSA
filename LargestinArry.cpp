//Largest element in an array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2,5,1,3,0};
    int n = 5;
//This is the Selection sort approach on arrays->Sort the array and print the last element;
    // for(int i=0;i<=n-1;i++)
    // {
    //     int min=i;
    //     for(int j=i+1;j<=n-1;j++)
    //     {
    //         if(arr[j]<arr[min])
    //         {
    //             min=j;
    //         }
    //     }

    //     int temp=arr[i];
    //     arr[min]=arr[i];
    //     arr[i]=temp;
    // }

    sort(arr.begin(),arr.end()); //Directly sort the array; 

// Another Approach ->let max value 

int max =arr[0];
for(int i=1;i<=n-1;i++)
{
    if(arr[i]>max)
    {
        max=arr[i];
    }
}

cout<<"The largest element in the array is " <<max;


    // cout<<"The largest element in the array is " <<arr[n-1];
}