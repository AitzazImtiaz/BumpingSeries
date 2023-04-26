import math
n = 1
while n <= 10:
    a = ((n + 1) * 2 ** abs(n - (math.ceil(math.sqrt(n)) * (math.ceil(math.sqrt(n)) - 1)) - 1)) / 2
    print(a)
    n += 1


