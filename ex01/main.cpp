#include <iostream>
#include "iter.hpp"

// Function to print an element
template<typename T>
void printElement(T const & element)
{
    std::cout << element << " ";
}

// Function to double an integer
void doubleInt(int & n)
{
    n *= 2;
}

int main()
{
    // Test with an array of integers
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(int);

    std::cout << "Original int array: ";
    iter(intArray, intArrayLength, printElement<int>);
    std::cout << std::endl;

    iter(intArray, intArrayLength, doubleInt);

    std::cout << "Int array after doubling: ";
    iter(intArray, intArrayLength, printElement<int>);
    std::cout << std::endl;

    // Test with an array of strings
    std::string stringArray[] = {"Hello", "World", "!"};
    size_t stringArrayLength = sizeof(stringArray) / sizeof(std::string);

    std::cout << "String array: ";
    iter(stringArray, stringArrayLength, printElement<std::string>);
    std::cout << std::endl;

    return 0;
}