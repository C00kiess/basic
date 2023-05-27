#pragma once

#include <iostream>
#include <chrono>
#include <thread>
#include <random>
#include <string>


// Prints the provided text to the console.
void print(std::string text);

// Simulates typing out the provided text to the console at a specified typing speed.
void typewrite(std::string text, int speed);

// Generates a random integer within the specified range.
int rand(int min, int max);

// Converts an integer to its corresponding string representation.
std::string ItoS(int number);


void print(std::string text)
{
    std::cout << text;
}
void typewrite(std::string text, int speed = 69)
{
    for (char c : text) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(speed));
    }
}
int rand(int min, int max)
{
    std::random_device rd;
    std::mt19937 generator(rd());

    std::uniform_int_distribution<int> distribution(min, max);
    int randomNumber = distribution(generator);

    return randomNumber;
}

std::string ItoS(int number)
{
    std::string strNumber = std::to_string(number);
    return strNumber;
}