t = int(input())
while(t>0):
    t -= 1
    x = int(input())
    y = [int(x) for x in input().split()]
    if 0 in y:
        print(len(set(y))-1)
    else:
        print(len(set(y)))