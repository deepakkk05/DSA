//Check if the array is sorted or not

// A1: Pick first and check if it is smaller than all other -> pick second and check same -> Repeat;

#include<bits/stdc++.h>
using namespace std;

int CheckIfSorted(vector<int> arr)
{
    int n = arr.size();
    int count=0;
    for( int i=0;i<=n-1;i++)
    {
        if(arr[i]>arr[(i+1)%n])  // why % : When i = n - 1, i + 1 = n would be out of bounds-> So, (n) % n = 0, i.e., last element is compared with first
        {
            count++;
        }
    }

    return count<=1;
}

int main(){
    vector<int> arr={3,4,5,1,2};
   if (CheckIfSorted(arr))
    {
        cout << "The array is sorted and rotated." << endl;
    }
    else
    {
        cout << "The array is NOT sorted and rotated." << endl;
    }
}