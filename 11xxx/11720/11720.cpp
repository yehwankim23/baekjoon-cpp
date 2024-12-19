#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int N;
    std::cin >> N;

    int sum = 0;
    std::cin.ignore();

    while (N--) {
        sum += std::cin.get() - '0';
    }

    std::cout << sum;
}
