#include <iostream>
#include <vector>

int interpolacja(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right && target >= arr[left] && target <= arr[right]) {
        int pos = left + (((double)(right - left) / (arr[right] - arr[left])) * (target - arr[left]));
        if (arr[pos] == target) {
            return pos;
        }
        else if (arr[pos] > target) {
            right = pos - 1;
        }
        else {
            left = pos + 1;
        }
    }

    return -1;
}

int main() {
    std::vector<int> arr = {11, 12, 22, 25, 34, 64, 90};
    int target = 22;

    int result = interpolacja(arr, target);

    if (result != -1) {
        std::cout << "Element " << target << " został znaleziony na indeksie: " << result << std::endl;
    } else {
        std::cout << "Element " << target << " nie został znaleziony." << std::endl;
    }

    return 0;
}