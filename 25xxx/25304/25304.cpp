#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int X, N;
    std::cin >> X >> N;

    int sum = 0;

    while (N--) {
        int a, b;
        std::cin >> a >> b;

        sum += a * b;
    }

    std::cout << (X == sum ? "Yes" : "No");
}
