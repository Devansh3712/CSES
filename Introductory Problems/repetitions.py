def solve():
    s = input()
    ans = 1
    for i in range (len(s) - 1):
        c = 1
        while (s[i] == s[i + 1]):
            c += 1
            i += 1
        ans = max(ans, c)
    print(ans)

solve()
