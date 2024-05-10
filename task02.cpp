#include <iostream>

int main() {
    std::cout << "The program looks for two numbers in the array,";
    std::cout << " the sum of which will give the result" << std::endl;
    
    int arr[] ={5, 7, 11, 2, 15, -5};
    int result = 9;
    int arr_size = sizeof(arr) /sizeof(arr[0]);
    bool found = false;


    for (int i = 0; i < arr_size - 1, !found; ++i) {
         for (int j = i + 1; j < arr_size; ++j) {
            if (arr[i] + arr[j] == result) {
                std::cout << arr[i] << " " << arr[j] << std::endl;
                found = true;
                break;
            }
         }
    }

    return 0;
}