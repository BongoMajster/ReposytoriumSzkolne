#include <iostream>
#include <vector>

int binarne(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] > target) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    std::vector<int> arr = {11, 12, 22, 25, 34, 64, 90};
    int target = 22;

    int result = binarne(arr, target);

    if (result != -1) {
        std::cout << "Element " << target << " został znaleziony na indeksie: " << result << std::endl;
    } else {
        std::cout << "Element " << target << " nie został znaleziony." << std::endl;
    }

    return 0;
}