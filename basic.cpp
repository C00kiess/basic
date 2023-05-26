#include "basic.h"

void print(std::string text) 
{
    std::cout << text;
}
void typewrite(std::string text,int speed)
{
    for (char c : text) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(speed));
    }
}