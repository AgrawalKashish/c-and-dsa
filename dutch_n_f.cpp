#include <iostream>
#include <vector>

// Function to swap two elements in an array
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Dutch National Flag Algorithm implementation
void dutchNationalFlag(std::vector<int>& arr) {
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;
    int pivot = 1; // We assume the pivot value is 1 (for sorting 0s, 1s, and 2s).

    while (mid <= high) {
        if (arr[mid] < pivot) {
            swap(arr[low], arr[mid]);
            ++low;
            ++mid;
        } else if (arr[mid] > pivot) {
            swap(arr[mid], arr[high]);
            --high;
        } else {
            ++mid;
        }
    }
}

int main() {
    std::vector<int> arr = {22, 70, 22, 11, 111, 20, 245, 1, 0};

    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }

    dutchNationalFlag(arr);

    std::cout << "\nSorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }

    return 0;
}
