import math
from collections import *
from itertools import *

def solve():
    n = int(input())
    if n < 4:
        if n == 1:
            print(1)
        else:
            print("NO SOLUTION")
    elif n == 4:
        print("2 4 1 3")
    else:
        for i in range (1, n + 1, 2):
            print(i, end = " ")
        for i in range (2, n + 1, 2):
            print(i, end = " ")

solve()

#for t in range (int(input())):
#    solve()

