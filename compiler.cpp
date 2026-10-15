#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int color = 10;  // g
#endif

    while (true) {
        std::time_t now = std::time(nullptr);
        std::tm* local = std::localtime(&now);

        // color 1s
#ifdef _WIN32
        SetConsoleTextAttribute(hConsole, color);
        color = (color == 15) ? 10 : color + 1;  // g,w,b
#endif

        std::cout << "\r" << local->tm_hour << ":"
                  << (local->tm_min < 10 ? "0" : "") << local->tm_min << ":"
                  << (local->tm_sec < 10 ? "0" : "") << local->tm_sec << "   ";
        std::cout.flush();

        // snd
        if (local