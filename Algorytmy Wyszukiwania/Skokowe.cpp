cpp
Copy code
#include <iostream>
#include <vector>
#include <cmath>

int Skokowe(const std::vector<int>& arr, int target) {
    int n = arr.size();
    int step = sqrt(n);

    int prev = 0;
    while (arr[std::min(step, n) - 1] < target) {
        prev = step;
        step += sqrt(n);
        if (prev >= n) {
            return -1;
        }
    }

    while (arr[prev] < target) {
        prev++;
        if (prev == std::min(step, n)) {
            return -1;
        }
    }

    if (arr[prev] == target) {
        return prev;
    }

    return -1;
}

int main() {
    std::vector<int> arr = {11, 12, 22, 25, 34, 64, 90};
    int target = 22;

    int result = Skokowe(arr, target);

    if (result != -1) {
        std::cout << "Element " << target << " został znaleziony na indeksie: " << result << std::endl;
    } else {
        std::cout << "Element " << target << " nie został znaleziony." << std::endl;
    }

    return 0;
}