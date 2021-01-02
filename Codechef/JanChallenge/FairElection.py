for t in range(int(input())):
    a,b = map(int, input().split())
    arr = list(map(int, input().split()))
    brr = list(map(int, input().split()))    
    
    i = 0
    flag = True
    while(sum(arr)<=sum(brr)):
        arr.sort()
        brr.sort()
        if(arr[0]<brr[-1]):
            x = brr[-1]
            brr[-1] = arr[0]
            arr[0] = x
            i = i+1
        else:
            flag = False
            print(-1)
            break
    
    if (flag == True):
        print(i)