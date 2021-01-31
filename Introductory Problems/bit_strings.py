import math
from collections import *
from itertools import *

def solve():
    n = int(input())
    MOD = (10 ** 9) + 7
    ans = ((2 % MOD) ** (n % MOD)) % MOD
    print(ans)

solve()

#for t in range (int(input())):
#    solve()

