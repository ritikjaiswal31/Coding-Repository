def is_prime(nums):
    if nums < 2:
        return False
    for i in range(2, int(nums**0.5) + 1):
        if nums % i == 0:
            return False
    return True

nums = int(input("Enter a number: "))
if is_prime(nums):
    print(f"{nums} is a prime number")
else:
    print(f"{nums} is not a prime number")