#include <iostream>
#include <vector>

int liniowe(const std::vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;y
}

int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int target = 22;

    int result = liniowe(arr, target);

    if (result != -1) {
        std::cout << "Element " << target << " został znaleziony na indeksie: " << result << std::endl;
    } else {
        std::cout << "Element " << target << " nie został znaleziony." << std::endl;
    }

    return 0;
}