#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int N, M;
    std::cin >> N >> M;

    int* baskets = new int[N];

    for (int index = 0; index < N; index++) {
        baskets[index] = 0;
    }

    while (M--) {
        int i, j, k;
        std::cin >> i >> j >> k;

        while (i++ <= j) {
            baskets[i - 2] = k;
        }
    }

    for (int index = 0; index < N; index++) {
        std::cout << baskets[index] << ' ';
    }

    delete[] baskets;
}
