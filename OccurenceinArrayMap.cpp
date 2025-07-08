//Find the occurence of the elements in the arrray using map;


#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[] = {2,5,2,5,7,3,7,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_map <int, int> mp;
     int maxfreq=0;
     int maxele;
     int minfreq=n;
     int mineli;

    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    for(auto it:mp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }

    for(auto it:mp)
    {
        int count = it.second;
        int ele = it.first;

        if(count > maxfreq )
        {
           maxfreq =  count;
            maxele= ele;
        }
        if(count < minfreq )
        {
            minfreq = count ;
            mineli= ele;
        }

        
    }
        cout<<maxele<<"->"<<maxfreq<<endl;
        cout<<mineli<<"->"<<minfreq<<endl;
    return 0;
}