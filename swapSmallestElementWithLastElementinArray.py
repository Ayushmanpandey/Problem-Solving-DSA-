from cgitb import small
from re import S


a= [2,1,7,6,4,8]
n = len(a)
pos = 0
def smallest(a,n):
    small = a[0]
    for i in range(n):
        if(a[i] < small):
            small = a[i]
            pos = i
    return pos

def swap(a,n):
    smallest(a,n)
    temp = a[pos]
    a[pos] = a[n-1]
    a[n-1] = temp


swap(a,n)
print(a)