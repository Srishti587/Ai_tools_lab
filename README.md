# AI Tools Lab

AI Tools Lab is a beginner-friendly Python project containing sorting algorithms and useful utility functions. It is designed to help learners practice Python programming and Git/GitHub workflows.

## Project Description

This project includes:

- A Bubble Sort algorithm
- Utility functions for common tasks
- Simple Python examples
- Practice with Git and GitHub

### Available Functions

**Sorting:**
- `bubble_sort(arr)` - Sorts a list of numbers in ascending order.

**Utility functions:**
- `is_palindrome(s)` - Checks whether a string is a palindrome.
- `count_words(text)` - Counts the number of words in a text.
- `celsius_to_fahrenheit(c)` - Converts Celsius to Fahrenheit.

## Installation

Clone the repository:

```bash
git clone https://github.com/Srishti587/Ai_tools_lab.git
```

Navigate to the project directory:

```bash
cd Ai_tools_lab
```

Make sure Python is installed:

```bash
python --version
```

## Usage

### Bubble Sort

```python
from sorting import bubble_sort

numbers = [64, 34, 25, 12, 22, 11, 90]

result = bubble_sort(numbers)

print(result)
```

Output:

```text
[11, 12, 22, 25, 34, 64, 90]
```

### Utility Functions

```python
from utils import is_palindrome, count_words, celsius_to_fahrenheit

print(is_palindrome("madam"))
print(count_words("Git and GitHub are useful"))
print(celsius_to_fahrenheit(0))
```

Output:

```text
True
5
32.0
```

## Project Structure

```text
Ai_tools_lab/
├── README.md
├── hello.py
├── sorting.py
└── utils.py
```

## Contributors

- **Srishti Kashyap**

## License

This project is licensed under the **MIT License**.

---

AI Tools Lab is a simple project for learning Python, algorithms, and Git/GitHub.