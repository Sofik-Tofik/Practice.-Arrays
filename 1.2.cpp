#include <iostream>

int main() {
    int array[] = { 2, 5, 8, 10, 3 };

    int minElement = array[0];
    int maxElement = array[0];

    for (int i = 1; i < sizeof(array) / sizeof(array[0]); ++i) {
        if (array[i] < minElement) {
            minElement = array[i];
        }
        if (array[i] > maxElement) {
            maxElement = array[i];
        }
    }

    std::cout << "Min: " << minElement << std::endl;
    std::cout << "Max: " << maxElement << std::endl;

    return 0;
}
