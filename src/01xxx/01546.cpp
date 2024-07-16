#include <iostream>
#include <iomanip>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int N;
    std::cin >> N;

    int sum = 0;
    int M = 0;

    for (int count = 0; count < N; count++) {
        int score;
        std::cin >> score;

        sum += score;

        if (score > M) {
            M = score;
        }
    }

    std::cout << std::fixed << std::setprecision(3) << (double) sum / N / M * 100;
}
