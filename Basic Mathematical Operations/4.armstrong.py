def is_armstrong(nums):
    digits = str(nums)
    power = len(digits)
    total = sum(int(digit) ** power for digit in digits)
    return total == nums

nums = int(input("Enter a number: "))
if is_armstrong(nums):
    print(f"{nums} is an Armstrong number")
else:
    print(f"{nums} is not an Armstrong number")
    