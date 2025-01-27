def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n-1)

nums = int(input("Enter a number: "))
if nums < 0:
    print("Factorial does not exist for negative numbers")
else:
    print(f"The factorial of {nums} is {factorial(nums)}")