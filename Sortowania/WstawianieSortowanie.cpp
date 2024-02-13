#include <iostream>
#include <vector>

void insertionSort(int* arr, int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Przed sortowaniem: ";
    for (int i = 0; i < arr_size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    insertionSort(arr, arr_size);

    std::cout << "Po sortowaniu: ";
    for (int i = 0; i < arr_size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}