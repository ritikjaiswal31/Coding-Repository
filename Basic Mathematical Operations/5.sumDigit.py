def sum_of_digits(nums):
    total = 0
    while nums > 0:
        total+=nums%10
        nums //= 10
    return total

nums = int(input("Enter a number to find the sume of its digit"))
print(f"The sum of digit of {nums} ")