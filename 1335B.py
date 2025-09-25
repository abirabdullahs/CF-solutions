t = int(input())

for _ in range(t):
    n, a, b = map(int, input().split())
    
    letters = ''.join(chr(ord('a') + i) for i in range(b))
    
    s = (letters * ((n + b - 1) // b))[:n]
    print(s)
