r, x, y, x1, y1 = map(int, input().split())
dist = (((x - x1) * (x - x1) + (y - y1) * (y - y1)) ** (1 / 2)) / r
isWhole = dist == int((((x - x1) * (x - x1) + (y - y1) * (y - y1)) ** (1 / 2)) / r)
print(int(dist - int(isWhole)))
