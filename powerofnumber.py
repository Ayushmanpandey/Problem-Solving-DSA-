
# Power  of  a  Number
# On this page we will see how to find Power of a Number in Python. We will see three methods to do so. User have to give base and power as input.
#  Power of a number is basically multiplying the base number by itself , power number of time.

# Example :

# Input  :  base = 2, power = 3
# Output  :  8
# Explanation  :   23 means 2 is base and 3 is power which is 3 times 2 (  2 x 2 x 2 ) which is equals to 8

# Solution : 1  using recursion

# def powOfNo(base,power):
#     if power!= 0:
#         return base* powOfNo(base,power-1)
#     else:
#         return 1

# res = powOfNo(2,9)
# print(res)


# Solution : 2 using for loop

# def powOfNo(base,power):
#     ans = base
#     for i in range(power-1):
#         ans*=base
#     return ans
# res = powOfNo(2,5)
# print(res)


# Solution : 3 using while loop
# def power(base, power):
#     ans = 1
#     while power != 0:
#         ans = ans * base
#         power = power - 1
#     return ans

# print(power(4, 9))