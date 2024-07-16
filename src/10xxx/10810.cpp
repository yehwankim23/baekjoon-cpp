#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int N, M;
    std::cin >> N >> M;

    int baskets[N];

    for (int& number : baskets) {
        number = 0;
    }

    while (M--) {
        int i, j, k;
        std::cin >> i >> j >> k;

        while (i++ <= j) {
            baskets[i - 2] = k;
        }
    }

    for (int& number : baskets) {
        std::cout << number << ' ';
    }
}
