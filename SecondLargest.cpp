//Find the Second largest element without sorting;

//A1: Sorting if no duplicates : Duplicates will cause problem you have to handle that(if sorting allowed)
//A2: Find Max Min and then find just next or just before elements
//A3: Given below : Two variable method : Find max,also keep track of last element;

#include<bits/stdc++.h>
using namespace std;

void Slarge(int arr[],int n)
{
    int max= arr[0];
    int Smax;
    for(int i=1;i<=n-1;i++)
    {
        if(arr[i]>max)
        {
            Smax=max;
            max=arr[i];
        }
        else if(arr[i]>Smax&&arr[i]!=max)
        {
            Smax=arr[i];
        }
    
    }
   cout<<"The Second Largest element is : "<<Smax;
}

int main(){
    int arr[] = {1,2,3,7,7,5};
    int n=6;
    Slarge(arr,n);

    
}