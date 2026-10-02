def calculate_average(numbers):
    """Calculate the average of a list of numbers."""
    if not numbers:
        return 0

    try:
        return sum(numbers) / len(numbers)
    except TypeError:
        raise TypeError("All elements must be numbers.")


numbers = [10, 20, 30, 40, 50]

print(calculate_average(numbers))