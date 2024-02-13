#include <iostream>
#include <vector>

int linioweZWartownikiem(const std::vector<int>& arr, int target) {
    int n = arr.size();
    int last = arr[n - 1];
    arr[n - 1] = target; 

    int i = 0;
    while (arr[i] != target) {
        i++;
    }

    arr[n - 1] = last; 

    if (i < n - 1 || arr[n - 1] == target) {
        return i;
    } else {
        return -1;
    }
}

int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int target = 22;

    int result = linioweZWartownikiem(arr, target);

    if (result != -1) {
        std::cout << "Element " << target << " został znaleziony na indeksie: " << result << std::endl;
    } else {
        std::cout << "Element " << target << " nie został znaleziony." << std::endl;
    }

    return 0;
}