#include <iostream>

int main() {
    const int arraySize = 5; 
    int array[arraySize] = { 2, 5, 8, 10, 3 }; 

    int sum = 0; 

  
    for (int i = 0; i < arraySize; ++i) {
        sum += array[i];
    }


    std::cout << "The sum of all elements in the array: " << sum << std::endl;

    return 0;
}
