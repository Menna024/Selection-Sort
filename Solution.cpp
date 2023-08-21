#include <bits/stdc++.h> 

void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr.at(j)<arr.at(i))
            {
                swap(arr.at(i),arr.at(j));
            }
        }
    }

    for(int s:arr)
     cout<<s<<", ";
}
