n = int(input())
a = []
for i in range(n):
    ele = int(input())
    a.append(ele)
a.sort()
revA= a[::-1] 
print(revA)