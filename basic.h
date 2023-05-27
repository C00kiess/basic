#pragma once

#include <iostream>
#include <windows.h>
#include <chrono>
#include <thread>
#include <random>
#include <string>
#include <ctime>

void print(const std::string& text)
{
    std::cout << text << std::endl;
}

void typewrite(const std::string& text, int typespeed = 69)
{
    for (char c : text) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(typespeed));
    }
}

int rand(int min, int max)
{
    static std::random_device rd;
    static std::mt19937 generator(rd());

    std::uniform_int_distribution<int> distribution(min, max);
    return distribution(generator);
}