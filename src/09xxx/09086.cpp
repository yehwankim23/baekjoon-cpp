#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int T;
    std::cin >> T;

    while (T--) {
        std::string word;
        std::cin >> word;

        std::cout << word.front() << word.back() << '\n';
    }
}
