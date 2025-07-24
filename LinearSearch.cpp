#include<bits/stdc++.h>
using namespace std;


int LinearSearch( int arr[],int n,int num)
{
//     for(int i=0;i<=n-1;i++)
//     {
//         if(arr[i]==num)
//         {
//             return i;
//         }
//     }

// return -1;

    return binary_search(arr[0],arr[4],num);
    
}

int main()
{
    int arr[] = {1 ,2 ,3 ,4 ,5};
    int n=5;
    int num=3;


    cout<<LinearSearch(arr,n,num);

    
}



