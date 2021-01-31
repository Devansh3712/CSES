import math
from collections import *
from itertools import *

def solve():
    x, y = map(int, input().split())
    ans = 0
    if x < y:
        if y % 2 != 0:
            ans = (y * y) - x + 1
        else:
            ans = ((y - 1) * (y - 1)) + x
    else:
        if x % 2 != 0:
            ans = ((x - 1) * (x - 1)) + y
        else:
            ans = (x * x) - y + 1
    print(ans)

for t in range (int(input())):
    solve()

