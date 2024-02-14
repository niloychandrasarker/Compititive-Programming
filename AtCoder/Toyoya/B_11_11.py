def count_repdigit_dates(N, D):
    repdigit_count = 0

    for i in range(1, N + 1):
        for j in range(1, D[i - 1] + 1):
            # Check if i and j are repdigits
            if len(set(str(i) + str(j))) == 1:
                repdigit_count += 1

    return repdigit_count

# Input
N = int(input())
D = list(map(int, input().split()))

# Output
result = count_repdigit_dates(N, D)
print(result)
