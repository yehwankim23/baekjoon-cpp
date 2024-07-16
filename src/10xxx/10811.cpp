#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int N, M;
    std::cin >> N >> M;

    int baskets[N];

    for (int index = 0; index < N; index++) {
        baskets[index] = index + 1;
    }

    while (M--) {
        int i, j;
        std::cin >> i >> j;

        for (i--, j--; i < j; i++, j--) {
            int temp = baskets[i];
            baskets[i] = baskets[j];
            baskets[j] = temp;
        }
    }

    for (int& number : baskets) {
        std::cout << number << ' ';
    }
}
