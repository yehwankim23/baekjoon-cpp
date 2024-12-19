#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int N;
    std::cin >> N;

    int* numbers = new int[N];

    for (int index = 0; index < N; index++) {
        std::cin >> numbers[index];
    }

    int v;
    std::cin >> v;

    int count = 0;

    for (int index = 0; index < N; index++) {
        if (numbers[index] == v) {
            count++;
        }
    }

    delete[] numbers;
    std::cout << count;
}
