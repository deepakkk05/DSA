//Move all Zeroes to end;


//My Approach : Range the array->Find Zero->Store next element on the Zero->Push back 0 ; ->Bad Approach : Erase is not effiecient
//Brute approach : Use an extra array -> to store nonzero elements and then push all zeros at the end; -> Btter the previous
//Two Pointer approach : Done below:The best;

#include<bits/stdc++.h>
using namespace std;

// void Move0toEnd(vector<int> arr,int n)
// {
//     for(int i=0;i<=n-1;i++)
//     {
//         if(arr[i]==0)
//         {
//             arr.erase(arr.begin()+i);
//             arr.push_back(0);
//         }
//     }

//     cout<<"Array after moving 0's to the end : ";
//     for(int i=0;i<=n-1;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

void Move0toEnd(vector<int> arr,int n)   //Two Pointer approach : Best optimized
{
    int j=-1; 
    for(int i =0;i<=n-1;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }

    if(j==-1)
    {
        //Empty bcz i jusyt want to print here: That condition already written below
        //So just want to continue after this condition
        //If Program falls into this condition hence there no 0's exist and it return/print the same array:)
    }

    else {
    for(int i=j+1;i<=n-1;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[j],arr[i]);
            j++;
        }
    }
}

    cout<<"Final Array : ";
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr = {1,0,2,3,0,4,0,1};
    int n=8;
    Move0toEnd(arr,n);
}