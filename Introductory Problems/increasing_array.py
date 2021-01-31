import math
from collections import *
from itertools import *

def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    ans = 0
    for i in range (n - 1):
        if arr[i + 1] < arr[i]:
            ans += arr[i] - arr[i + 1]
            arr[i + 1] = arr[i]
    print(ans)

solve()

#for t in range (int(input())):
#    solve()
