#pragma once

#include <iostream>
#include <chrono>
#include <thread>
#include <random>
#include <string>

// Prints the provided text to the console.
void print(std::string text);

// Simulates typing out the provided text to the console.
void typewrite(std::string text);

// Simulates typing out the provided text to the console at a specified typing speed.
void typewrite(std::string text, int speed);

// Generates a random integer within the specified range.
int rand(int min, int max);

// Converts an integer to its corresponding string representation.
std::string ItoS(int number);
