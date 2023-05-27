# Basic Library

## Overview
The Basic Library is a small collection of utility functions for basic console interactions and random number generation. It provides functionality for printing text, simulating typing, generating random integers, and converting integers to strings.

## Functions
1. `void print(std::string text)`
   - Description: Prints the provided text to the console.
   - Parameters:
     - `text`: The text to be printed.
   - Return Type: `void`

2. `void typewrite(std::string text, int speed = 69)`
   - Description: Simulates typing out the provided text to the console at a specified typing speed.
   - Parameters:
     - `text`: The text to be typewritten.
     - `speed` (optional): The typing speed in milliseconds per character. Defaults to 69 milliseconds.
   - Return Type: `void`

3. `int rand(int min, int max)`
   - Description: Generates a random integer within the specified range.
   - Parameters:
     - `min`: The minimum value for the random number (inclusive).
     - `max`: The maximum value for the random number (inclusive).
   - Return Type: `int`

4. `std::string ItoS(int number)`
   - Description: Converts an integer to its corresponding string representation.
   - Parameters:
     - `number`: The integer to be converted to a string.
   - Return Type: `std::string`

## Usage Example

```cpp
#include "basic.h"

int main() {
    // Example usage of the Basic Library functions
    print("Hello, world!\n");
    typewrite("This text will be typed out slowly.\n", 100);
    int randomNum = rand(1, 100);
    std::string numString = ItoS(randomNum);
    print("Generated random number: " + numString + "\n");

    return 0;
}
```
## License
This library is distributed under the MIT License. Feel free to use it in your projects and modify it according to your needs.
