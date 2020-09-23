//O(n)
int findPlatform(int arr[], int dep[], int n)
{
    int platform[2361] = {};
    int reqPlatform = 1;

    for (int i = 0; i < n; i++)
    {
        ++platform[arr[i]];
        --platform[dep[i] + 1];
    }

    for (int i = 1; i < 2361; i++)
    {
        platform[i] += platform[i - 1];
        reqPlatform = max(reqPlatform, platform[i]);
    }

    return reqPlatform;
}

//o(nlogn)
int findPlatform(int arr[], int dep[], int n)
{
	sort(arr, arr+n);
	sort(dep, dep+n);
	
	int plat = 1, result = 1;
	int i=1, j=0;
	while(i<n && j<n)
	{
	    if(arr[i]<dep[j]){
	        plat++;
	        i++;
	    }
	    
	    else if(arr[i]>dep[j]){
	        plat--;
	        j++;
	    }
	    
	    if(plat > result)
	        result = plat;
	}
	
	return result;
}


