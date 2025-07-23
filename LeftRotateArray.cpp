
#include<bits/stdc++.h>
using namespace std;

        //My Approach : For Vectors !!!

// vector<int> Rarray(vector<int> nums,int n)  
// {
//     if(n>0){
//     int temp=nums[0];
//     nums.erase(nums.begin());
//     nums.push_back(temp);
//     return Rarray(nums,n-1);
//     }
//     return nums;
// }


// int main(){
//     vector<int> nums={1,2,3,4,5};
//     int n=2; //No. of times it should be rotated;
//    vector<int> Rotated= Rarray(nums,n);

//    cout<<"Array rotated left by "<<n<<" Postions : ";
//    for(int i:Rotated)
//    {
//     cout<<i<<" ";
//    }
// }
// -------------------------------------------------

// Optimized Approach for Arrays

void Rarray(int nums[],int n)
{
    int temp=nums[0];
    for(int i=0;i<=n-2;i++)
    {
        nums[i]=nums[i+1];
    }

    nums[n-1]=temp;

    cout<<"left Rotated array by 1 : ";
    for(int i=0;i<=n-1;i++)
        {
            cout<<nums[i]<<" ";
    }

}

int main()
{
    int nums[]={1,2,3,4,5};
    int n=5;
    Rarray(nums,n);
}