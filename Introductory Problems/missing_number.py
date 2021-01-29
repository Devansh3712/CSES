def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    n_sum = (n * (n + 1)) // 2
    arr_sum = sum(arr)
    print(n_sum - arr_sum)

solve()
