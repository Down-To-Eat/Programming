n = int (input("enter the number"))
rev = 0
num = n
while n > 0:
    digit = n % 10
    rev = rev * 10 + digit
    n //= 10
print ("the reverse of number",num,'is',rev)