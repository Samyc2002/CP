#!/usr/bin/env python3

test = int(input())
while test > 0:
    n = int(input())
    arr = []
    if n % 2 == 0:
        for i in range(n - 2, 1, -1):
            arr.append(i)
        arr.append(1)
        arr.append(n - 1)
        arr.append(n)
        for i in range(len(arr)):
            print(arr[i], end=" ")
    else:
        for i in range(n - 2, 1, -1):
            arr.append(i)
        for i in range(len(arr) - 1):
            temp = arr[i]
            arr[i] = arr[i + 1]
            arr[i + 1] = temp
        arr.append(1)
        arr.append(n - 1)
        arr.append(n)
        for i in range(len(arr)):
            print(arr[i], end=" ")

    test = test - 1
    print("")
