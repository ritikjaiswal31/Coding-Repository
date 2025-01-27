def fibonacci(n):
    a, b = 0, 1
    sequence = []
    for _ in range(n):
        sequence.append(a)
        a, b = b, a + b
    return sequence

nums = int(input("Enter the number of terms for fibonacci: " ))
if nums <= 0:
    print("Please enter a positive integer")

else:
    print(f"The first {nums} terms of the Fibonacci sequence are: {fibonacci(nums)}")