#include <iostream>
using namespace std;

int binary_search(int array[], int n, int target) {
    int start = 0, end = n - 1;

    while (start <= end) {
        int middle = start + (end - start) / 2; 
        if (array[middle] == target)
            return middle;
        else if (array[middle] < target)
            start = middle + 1;
        else
            end = middle - 1;
    }
    return -1; 
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50}; 
    int target_value = 40;
    int length = sizeof(numbers) / sizeof(numbers[0]);

    int index = binary_search(numbers, length, target_value);

    if (index != -1)
        cout << "Target found at index " << index << endl;
    else
        cout << "Target not found in the array." << endl;

    return 0;
}


//Expected Output:
Target found at index 3



