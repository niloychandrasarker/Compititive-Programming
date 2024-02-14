a, b, c = mj()

if a > b:
    a, b = b, a

bec = b - c
z = 0

for i in range(60, -1, -1):
    if (a ^ b) >> i & 1:
        if z + (1 << i) <= c:
            if (a >> i) & 1 == 0:
                if 1 << (i + 1) <= bec:
                    z += (1 << i)
                    bec -= (1 << (i + 1))

print(bec)
