from functools import reduce

n, m = map(int, input().split())
l = []
tich = reduce(lambda a, b: a*b, list(map(int, input().split())))
for i in range(m):
    tich1 = reduce(lambda a, b: a*b, list(map(int, input().split())))
    if tich%tich1==0:
        l.append(i+1)
        
print(len(l))
for i in l:
    print(i, end=" ")

