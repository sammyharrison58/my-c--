#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int color = 10; // green
#endif

    while (true)
    {
        std::time_t now = std::time(nullptr);
        std::tm *local = std::localtime(&now);

#ifdef _WIN32
        SetConsoleTextAttribute(hConsole, color);
        color = (color == 15) ? 10 : color + 1;
#endif

        std::cout << "\r" << local->tm_hour << ":"
                  << (local->tm_min < 10 ? "0" : "") << local->tm_min << ":"
                  << (local->tm_sec < 10 ? "0" : "") << local->tm_sec << "   ";
        std::cout.flush();

        if (local->tm_sec == 0 && local->tm_min == 0)
        {
            std::cout << "\a\n"; // beep
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
}