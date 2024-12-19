#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int T;
    std::cin >> T;

    while (T--) {
        int R;
        std::string S;
        std::cin >> R >> S;

        for (char& character : S) {
            for (int count = 0; count < R; count++) {
                std::cout << character;
            }
        }

        std::cout << '\n';
    }
}
