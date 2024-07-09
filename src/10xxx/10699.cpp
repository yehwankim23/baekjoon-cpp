#include <iostream>
#include <ctime>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::time_t time = std::time(nullptr);
    std::tm* tm = std::gmtime(&time);
    tm->tm_hour += 9;

    int month = tm->tm_mon + 1;
    int day = tm->tm_mday;

    std::cout << tm->tm_year + 1900 << '-'
              << (month < 10 ? "0" : "") << month << '-'
              << (day < 10 ? "0" : "") << day;
}
