
#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void RevArr(int arr[],int n)
{ 
    int p1 = 0, p2 = (n-1);
    while(p1<p2)
    {
        swap(arr[p1],arr[p2]);
        p1++;
        p2--;
    }

    print(arr,n);
}

// Using Recursion :

// void reverseArray(int arr[], int start, int end) {
//    if (start < end) {
//       swap(arr[start], arr[end]);
//       reverseArray(arr, start + 1, end - 1);
//    }
// }

//Using BuiltIn Function;

// void reverseArray(int arr[], int n) {
//    //Reversing elements from index 0 to n-1 
//    reverse(arr, arr + n);
// }

int main(){
 

    int a[]={1,4,7,9,3,6,9,5,7,8};
    int n =sizeof(a)/sizeof(a[0]);

    RevArr(a,n);
}