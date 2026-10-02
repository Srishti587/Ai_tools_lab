#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& numbers, int target) {
    int left = 0;
    int right = static_cast<int>(numbers.size()) - 1;

    while (left <= right) {
        int middle = (left + right) / 2;

        if (numbers[middle] == target) {
            return middle;
        } else if (numbers[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1;
}

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50, 60, 70};
    int target = 50;

    int result = binarySearch(numbers, target);

    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}