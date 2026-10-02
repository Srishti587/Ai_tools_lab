def calculate_average(numbers):
    total = sum(numbers)
    average = total / len(numbers)
    return average


def find_maximum(numbers):
    maximum = max(numbers)
    return maximum


numbers = [10, 20, 30, 40, 50]

print("Average:", calculate_average(numbers))
print("Maximum:", find_maximum(numbers))