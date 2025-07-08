#include<bits/stdc++.h>
using namespace std;


void revArr(int a[],int n)
{
    if(n==0)
    {
        return;
    }
    cout<<a[n-1]<<endl;
    revArr(a,(n-1));
}

int main(){
    int a[] = {1,2,3,34,5,8,3,6};
    int n = sizeof(a)/sizeof(a[0]);
    revArr(a,n);
}