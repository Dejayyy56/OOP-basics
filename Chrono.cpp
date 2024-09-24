#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {    
    // Get the current time  before execution
    auto start = high_resolution_clock::now();

    // Your function to be measured
    int nums[] = {5, 4, 3, 1, 2};
    bubbleSort(nums, 5);
    for (int i : nums)
        cout << i << " ";
    cout << endl;

    // Get the current time  after execution
    auto end = high_resolution_clock::now();
    
    // Calculate the duration in microseconds
    auto duration = duration_cast<microseconds>(end - start).count();
    
    cout << "Time taken to execute function is: " << duration << " microsecond(s)" << endl;

    return 0;
}
