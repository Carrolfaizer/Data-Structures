#include <iostream>
#include <vector>
#include <cstdlib>

int summation(std::vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return sum;
}

int maximum(std::vector<int>& arr) {
    int max = arr[0];
    for (int num : arr) {
        if (num > max) {
            max = num;
        }
    }
    return max;
}

int main() {
    int n;
    std::cout << "Enter the length of the array: ";
    std::cin >> n;

    std::vector<int> array;
    for (int i = 0; i < n; ++i) {
        int num = rand() % (n + 1); // rand() generates a random number between 0 and RAND_MAX
        array.push_back(num);
    }
    
    std::cout << "The array is: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    int sum = summation(array);
    std::cout << "The sum of the array is: " << sum << std::endl;

    int max = maximum(array);
    std::cout << "The maximum value in the array is: " << max << std::endl;

    return 0;
}
