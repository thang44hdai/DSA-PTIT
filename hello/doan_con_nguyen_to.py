import math

leng = int(2e6+1)
prime = [1]*int(leng)
prime[0] = prime[1] = 0
for i in range(2, int(math.sqrt(leng))):
    if prime[i] == 1:
        for j in range(i*i, leng, i):
            prime[j] = 0
a = []
for i in range(leng):
    if prime[i]==1:
        a.append(i)

l, h = [int(i) for i in input().split()]
p = input()
cnt = 0

for i in range(l, h+1):
    if p in str(a[i-1]):
        cnt += 1
print(cnt)
