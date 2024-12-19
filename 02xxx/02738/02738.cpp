#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int N, M;
    std::cin >> N >> M;

    int* matrix = new int[N * M];

    for (int row = 0; row < N; row++) {
        for (int column = 0; column < M; column++) {
            std::cin >> matrix[N * row + column];
        }
    }

    for (int row = 0; row < N; row++) {
        for (int column = 0; column < M; column++) {
            int element;
            std::cin >> element;

            std::cout << matrix[N * row + column] + element << ' ';
        }

        std::cout << '\n';
    }

    delete[] matrix;
}
