#include <iostream>
#include <vector>

void cocktailSort(std::vector<int> &arr) {
    bool swapped = true;
    int start = 0;
    int end = arr.size() - 1;
    
    while (swapped) {
        swapped = false;
        for (int i = start; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
        --end;
        for (int i = end - 1; i >= start; --i) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        ++start;
    }
}

int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    std::cout << "Przed sortowaniem: ";
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    cocktailSort(arr);
    
    std::cout << "Po sortowaniu: ";
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
