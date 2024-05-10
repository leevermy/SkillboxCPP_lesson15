#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int arr[]{-100, -50, -5, 1, 10, 15};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int mid = 0;
    while (mid < arr_size && arr[mid] < 0) {
        ++mid;
    }

    int pos = mid; 
    int neg = mid - 1;

    while(pos < arr_size && neg >= 0) {
        if (abs(arr[pos]) < abs(arr[neg])) {
            cout << arr[pos] << " ";
            ++pos;
        } else {
            cout << arr[neg] << " ";
            --neg;
        }
    }

    while(pos < arr_size) {
        cout << arr[pos] << " ";
        ++pos;
    }

    while(neg >= 0) {
        cout << arr[neg] << " ";
        --neg;
    }

    return 0;

}
