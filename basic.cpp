#include "basic.h"

void print(std::string text) 
{
    std::cout << text;
}
void typewrite(std::string text)
{
    for (char c : text) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(69));
    }
}
void typewrite(std::string text,int speed)
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