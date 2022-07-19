t = int(input())
for _ in range(t):
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    ans = 0
    prefix = [0]*n
    prefix[0] = a[0]
    for i in range(n-1):
        prefix[i+1] = prefix[i] + a[i+1]

    for i in range(n):
        ans += max(0, ((x - prefix[i])//(i+1))+1)
    print(ans)
