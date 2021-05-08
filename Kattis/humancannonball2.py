import math
for _ in range(int(input())):
    v, theta, x, h1, h2 = map(float, input().split())
    h1 += 1
    h2 -= 1

    theta = math.radians(theta)
    t = x / (v * math.cos(theta))
    y = (v * t * math.sin(theta)) - (.5 * 9.81 * (t**2))

    if y > h1 and y < h2:
        print('Safe')
    else:
        print('Not Safe')
