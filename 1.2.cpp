#include <iostream>
#include <limits>

int main() {
    const int arraySize = 5;
    int array[arraySize] = { 2, 5, 8, 10, 3 };

    int minElement = std::numeric_limits<int>::max();
    int maxElement = std::numeric_limits<int>::min();

    for (int i = 0; i < arraySize; ++i) {
        if (array[i] < minElement) {
            minElement = array[i];
        }
        if (array[i] > maxElement) {
            maxElement = array[i];
        }
    }

    std::cout << "min: " << minElement << std::endl;
    std::cout << "max: " << maxElement << std::endl;

    return 0;
}
