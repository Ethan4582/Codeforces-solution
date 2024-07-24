inp = lambda : list(map(int,input().split()))
for _ in range(int(input())):
    n = int(input())
    a = inp()
    
    ans = 0
    d = 0
    for i in range(1,n):
        if a[i-1] > a[i]:
            if a[i-1] > a[i] + d:
                ans += 2*(a[i-1] - a[i] - d) + d
                d = a[i-1] - a[i]
            else:
                ans += a[i-1] - a[i]
            a[i] = a[i-1]
            
    print(ans)