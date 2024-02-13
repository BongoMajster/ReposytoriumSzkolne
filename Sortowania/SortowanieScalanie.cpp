#include <iostream>
#include <vector>
void merge(std::vector<int> &arr, int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;
    std::vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(std::vector<int> &arr, int left, int right) {
    if (left >= right)
        return;
    int middle = left + (right - left) / 2;
    mergeSort(arr, left, middle);
    mergeSort(arr, middle + 1, right);
    merge(arr, left, middle, right);
}

int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int arr_size = arr.size();

    std::cout << "Przed sortowaniem: ";
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    mergeSort(arr, 0, arr_size - 1);

    std::cout << "Po sortowaniu: ";
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}