n = int(input("Enter the number: "))
temp = n
sum = 0

while n > 0:
    # line1
    # line2
    n //= 10

if temp == sum:
    print("Armstrong number")
else:
    print("Not Armstrong number")

# For example, 371 is an Armstrong number since 3*3 + 73 + 1*3 = 371.
'''
An Armstrong number is one whose sum of digits raised to the power three equals the number itself
complete the following code such that it checks whether the number is Armstrong or not.

For example : 3^3 + 7^3 + 1^3 = 371
'''
