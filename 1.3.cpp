#include <iostream>

int main() {
    int array[] = { 2, 5, 8, 10, 3 };
    int arraySize = sizeof(array) / sizeof(array[0]);

    int sum = 0;
    for (int i = 0; i < arraySize; ++i) {
        sum += array[i];
    }

    double average = static_cast<double>(sum) / arraySize;

    std::cout << "Average value of elements in the array: " << average << std::endl;

    return 0;
}
