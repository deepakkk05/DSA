// Print Fibonacci series till nth term


//My Approach //Similiar to the 2nd approach of Striver;
#include<bits/stdc++.h>
using namespace std;

// void fib(int n )
// {
//     int x=0;
//     int y=1;
//     int temp;
//     if(n>0)
//     {
//     cout<<x<<" ";
//     cout<<y<<" ";
//     while(y!=n)
//     {
//     cout<<x+y<<" ";
//     temp=x;
//     x=y;
//     y=temp+y;
//     }
//    }
//    else
//    {
//     cout<<"Invalid Input";
//    }

// }


// int main(){

//     int n;
//     cin>>n;

   

//     fib(n);
// }

// Striver Approach : 
// 1.Naive Approach :  Take array -> Store -> Print 

// void fib(int n)
// {
//    int fibo[n+1];
//    fibo[0] = 0;
//    fibo[1] = 1;

//    if(n<0)
//    {
//     cout<<"Invalid Input";
//    }
//    else if(n==0)
//    {
//     cout<<fibo[0];
//    }
//    else if(n==1)
//    {
//     cout<<fibo[0]<<" "<<fibo[1];
//    }
//    else
//    {
//      for(int i=2;i<=n;i++)
//      {
//         fibo[i]=fibo[i-1]+fibo[i-2];
//      }

//      cout<<"The fib series till "<<n<<"th Term is : ";
//      for(int j=0;j<=n;j++)
//      {
//         cout<<fibo[j]<<" ";
//      }
//    }
// }

// int main(){
//     int n;
//     cin>>n;
//     fib(n);
// }

//Print nth Number of Fibonaacci
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }

    int last = fib(n-1);
    int slast = fib(n-2);

    return last+slast;
}

int main()
{
    int n=4;
    cout<<fib(n)<<" "<<endl;
    return 0;
}

