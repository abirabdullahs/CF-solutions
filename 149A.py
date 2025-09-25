n= int(input())
a = list(map(int,input().split()))

a.sort()

b = sorted(a, reverse=True)

sum = 0
c=0

for i in b:

        if (sum>=n): break
        sum = sum+i
        c = c+1
        
    

if sum<n :
    print(-1)
else:
    print(c)
