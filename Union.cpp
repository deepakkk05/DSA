//union1 of the Two arrays

#include<bits/stdc++.h>
using namespace std;


// A1: Using Maps 
// vector<int> Findunion1(int arr1[],int arr2[],int n,int m) 
// {
//     map<int,int> freq; //It will store unique value with its frequency however we are not gonna use frequency anywhere;
//     vector<int> union11;

//     for(int i=0;i<=n-1;i++)
//     {
//         freq[arr1[i]]++; //Here,If that element dosnt exist it will insert otherwise it will incraese its value/freq
//     }

//     for(int i=0;i<=m;i++)
//     {
//         freq[arr2[i]]++;
//     }

//     for(auto & it:freq)
//     {
//         union11.push_back(it.first);
//     }

//     return union11;
// }

// -------------------------------------

// A2: Using sets 
// vector < int > Findunion1(int arr1[], int arr2[], int n, int m) {
//   set < int > s;
//   vector < int > union1;
//   for (int i = 0; i < n; i++)
//     s.insert(arr1[i]);
//   for (int i = 0; i < m; i++)
//     s.insert(arr2[i]);
//   for (auto & it: s)
//     union1.push_back(it);
//   return union1;
// }
// -------------------------------------------------------------


// A3:Two Pointer approach : As always the best
vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  int i = 0, j = 0; // pointers
  vector < int > Union; // Union vector
  while (i < n && j < m) {
    if (arr1[i] <= arr2[j]) // Case 1 and 2
    {
      if (Union.size() == 0 || Union.back() != arr1[i])
        Union.push_back(arr1[i]);
      i++;
    } else // case 3
    {
      if (Union.size() == 0 || Union.back() != arr2[j])
        Union.push_back(arr2[j]);
      j++;
    }
  }
  while (i < n) // IF any element left in arr1
  {
    if (Union.back() != arr1[i])
      Union.push_back(arr1[i]);
    i++;
  }
  while (j < m) // If any elements left in arr2
  {
    if (Union.back() != arr2[j])
      Union.push_back(arr2[j]);
    j++;
  }
  return Union;
}


int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[] ={2,3,4,4,5};
    int n=5;
    int m=5;
    vector<int> union11;

   union11= FindUnion(arr1,arr2,n,m);

   cout<<"Array after union1: ";
   for(auto val:union11)   //& used for the refernce,It will still work without of &;
   {
        cout<<val<<" ";
   }
}