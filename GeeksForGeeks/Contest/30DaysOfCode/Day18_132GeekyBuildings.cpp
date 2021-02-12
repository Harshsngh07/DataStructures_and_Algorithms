class Solution{
public:
	bool recreationalSpot(int arr[], int n){
		int currMin(arr[0]), currMax(arr[0]);
		
		for(int i=1;i<n;i++)
		{
		    currMin = min(currMin, arr[i]);
		    currMax = max(currMax, arr[i]);
		    
		    if(arr[i]<currMax && arr[i]>currMin)
		        return true;
		}
		
		return false;
	}
};