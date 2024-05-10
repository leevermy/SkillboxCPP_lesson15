#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers;
    int number;

    do {
        std::cout << "Enter a number: ";
        std::cin >> number;
        std::cin.ignore(1000, '\n');

        if (number == -2) {
            std::cout << "Program terminated" << std::endl;
            break;
        } else if (number == -1) {
            if (numbers.size() == 5) {
                std::cout << "The fifth highest number among those entered is: " << numbers[4] << std::endl;
            } else {
                std::cout << "There are less than five numbers" << std::endl;
            }
        } else {
            if (numbers.size() < 5 || number < numbers.back()) {
                numbers.push_back(number);
                std::sort(numbers.begin(), numbers.end());
                if (numbers.size() > 5) {
                    numbers.pop_back();
                }
            }
        }

    } while(true);

    return 0; 
}