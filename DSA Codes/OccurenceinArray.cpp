//find the occurencce of each element in the array;

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,6,3,7,3,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    vector<bool> visited(n,false);
     int maxfreq=0;
     int maxEle;
     int minfreq=n;
     int mineli;
    for(int i=0;i<n;i++)
    {    
          int count = 1;
        if(visited[i]==true)
        {
            continue;
        }
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                visited[j]=true;
                count++;
            }
        }
        cout<<"The count of "<<arr[i]<<"is "<<count<<endl;

        if(maxfreq<count)
        {
            maxEle=arr[i];
            maxfreq = count;
        }
        if(minfreq>count)
        {
            mineli=arr[i];
            minfreq = count;
        }
    }

    cout<<maxEle<<"->"<<maxfreq<<endl;
    cout<<mineli<<"->"<<minfreq<<endl;

   
}