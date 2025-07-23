//Remove the Duplicates from the Sorted Array : Returning the Unique Elements 
#include <bits/stdc++.h>
using namespace std;

// int RemoveD(vector<int> nums)
// {
//     int n = nums.size();
//     for(int i=1;i<=n-1;i++)
//     {
//         if(nums[i-1]==nums[i])
//         {
//             nums.erase(nums.begin()+i);
//         }
//     }
//     return nums.size();
// }

// int RemoveD(vector<int> nums) //Using Hashing : Store Unique Elements :)
// {
//     int n=nums.size();
//     set<int> temp;
//     for(int i=0;i<=n-1;i++)
//     {
//         temp.insert(nums[i]);
//     }

//     int k =temp.size();

//     int j=0;
//     for (int x:temp)
//     {
//         nums[j++]=x;
//     }
//     return k;

// }

// int RemoveD(vector<int> nums) //Two Pointer Approach
// {
//     int i=0;
//     for(int j=1;j<=nums.size()-1;j++)
//     {
//         if(nums[i]!=nums[j])
//         {
//             i++;
//             nums[i]=nums[j];
//         }
//     }

//     return i+1;
// }



int main()
{
    vector<int> nums = {1,1,2};
    cout<<RemoveD(nums);

}