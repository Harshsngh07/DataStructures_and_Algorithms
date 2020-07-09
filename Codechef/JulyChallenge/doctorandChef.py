def next(arr, target): 
    start = 0; 
    end = len(arr) - 1; 
  
    ans = -1; 
    while (start <= end): 
        mid = (start + end) // 2; 
 
        if (arr[mid] <= target): 
            start = mid + 1; 
        else: 
            ans = mid; 
            end = mid - 1; 
  
    return ans-1 

t = int(input())
for _ in range(t):
    n,x = [int(y) for y in input().split()]
    v = [int(y) for y in input().split()]
    v.sort()
    
    days = 0
    maxE = max(v)


    
    while x<maxE:
       if (x<v[0]):
         days += 1
         x = 2*x
       else:
         temp = next(v,x)
         h = v[temp]
         if(2*h>=x):
            days += 1
            x = 2*h
            v.pop(temp)
         else:
            days += 1
            x = 2*x
    days = days+len(v)
    print(days)