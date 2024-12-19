#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int N;
    std::cin >> N;

    for (int row = 1; row <= N; row++) {
        for (int count = 0; count < row; count++) {
            std::cout << '*';
        }

        std::cout << '\n';
    }
}
