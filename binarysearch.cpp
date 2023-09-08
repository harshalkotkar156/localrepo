#include <iostream>
using namespace std;

bool binarySearch(int arr[],int n,int target) {
    int left = 0;
    int right = n-1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is equal to the middle element
        if (arr[mid] == target) {
            return true;
        }
        // If the target is less than the middle element, search the left half
        else if (arr[mid] > target) {
            right = mid - 1;
        }
        // If the target is greater than the middle element, search the right half
        else {
            left = mid + 1;
        }
    }

    // Element not found in the array
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target;cout<<"Enter Target : ";cin>>target;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    if (binarySearch(arr,n, target)) {
        std::cout << "Element is PRESENT" <<endl;
    } else {
        std::cout << "Element not found in the array" << std::endl;
    }

    return 0;
}