// given arr[] = {1,3,8,,10,12,15} key = 12
// min absolute difference is {2} as |10-12| = 2
// just apply simple binary search if element is found then absolute difference will be  0 
// if not found then you will end up at the neigbouring elements 
// finally take the abs diff of its neigbouring elements and return the min of those two neigbouring elements

int minDiff(vector<int>& arr, int key)
{
    int start(0), end(arr.size()-1);
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]==key)
            return arr[mid];
        else if(arr[mid]>key)
            end = mid - 1;
        else
            start = mid + 1;
    }

    int x = abs(arr[start]-key);
    int y = abs(arr[end]-key);

    return min(x,y);
}