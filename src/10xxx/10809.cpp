#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::string S;
    std::cin >> S;

    for (char character = 'a'; character <= 'z'; character++) {
        long position = (long) S.find(character);
        std::cout << (position == std::string::npos ? -1 : position) << ' ';
    }
}
