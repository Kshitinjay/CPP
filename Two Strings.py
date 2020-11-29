T = int(input())
for i in range(T):
    S1,S2 = input().split()
    if sorted(S1) == sorted(S2):
        print("YES")
    else:
        print("NO")
