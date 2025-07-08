// Sum of first N naturak numbers 

#include<bits/stdc++.h>
using namespace std;


int sum(int i)
{
       if(i==0)
       {
        return 0;
       }
       return i + sum(i-1);
}


int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
}