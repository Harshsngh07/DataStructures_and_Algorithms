//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int start, int end, int x)
{
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(a[mid] == x)
            return mid;
        else if(mid-1>=start && a[mid-1]==x)
            return mid-1;
        else if(mid+1<=end && a[mid+1] == x)
            return mid+1;
        
        if(a[mid]>x)
            end = mid - 2;
        else
            start = mid + 2;
        
    }
    
    return -1;
}

int main()
{
        int arr[] = {3, 2, 10, 4, 40}; 
        int n = sizeof(arr) / sizeof(arr[0]); 
        int x = 1; 
        int result = binarySearch(arr, 0, n - 1, x); 
        (result == -1) ? printf("Element is not present in array") 
                       : printf("Element is present at index %d",  
                                 result); 
        return 0; 
}