#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int N;
    std::cin >> N;

    for (; N; N -= 4) {
        std::cout << "long ";
    }

    std::cout << "int";
}
