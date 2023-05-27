# BASIC Library

BASIC is a lightweight C++ library that provides basic utilities for console-based applications. It includes functions for printing text, simulating typing effects, generating random numbers, and converting integers to strings.

## Functions

### `void print(std::string text)`

This function prints the provided `text` to the console.

### `void typewrite(std::string text)`

This function simulates typing out the provided `text` to the console. It displays each character with a slight delay, creating a typing effect.

### `void typewrite(std::string text, int speed)`

This function simulates typing out the provided `text` to the console at a specified `speed`. The `speed` parameter determines the delay between each character, allowing you to control the typing speed.

### `int rand(int min, int max)`

This function generates a random integer within the specified range. It takes a minimum value `min` and a maximum value `max` and returns a random integer between them, inclusive.

### `std::string ItoS(int number)`

This function converts an integer `number` to its corresponding string representation. It returns the string representation of the provided integer.

## Usage

To use the BASIC library, you can include the necessary header file in your C++ program:

```cpp
#include <iostream>
#include "basic.h"

int main() {
    std::string message = "Hello, world!";
    print(message);
    typewrite("This is a typing effect.");
    typewrite("This will be typed faster.", 50);

    int randomNum = rand(1, 100);
    std::cout << "Random Number: " << randomNum << std::endl;

    int number = 42;
    std::string strNumber = ItoS(number);
    std::cout << "Integer to String: " << strNumber << std::endl;

    return 0;
}
```
## License
This library is distributed under the MIT License. Feel free to use it in your projects and modify it according to your needs.
