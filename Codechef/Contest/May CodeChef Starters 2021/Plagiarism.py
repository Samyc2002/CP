t = int(input())
for i in range(t):
    n, m, k = input().split()
    n = int(n)
    m = int(m)
    k = int(k)
    attemps = []
    for j in range(k):
        arr = input().split()
        for p in arr:
            attemps.append(int(p))
        cheaters = {}
        cheats = 0
        for p in attemps:
            if p<n :
                if cheaters.has_key(p):
                    cheats = cheats+1
                cheaters[p] = cheaters.get(p, 1) + 1
    print(cheats, end=" ")
    for i, j in cheaters.items():
        if j>1 :
            print(i, end=" ")