#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int N, X;
    std::cin >> N >> X;

    int numbers[N];

    for (int& number : numbers) {
        std::cin >> number;
    }

    for (int& number : numbers) {
        if (number < X) {
            std::cout << number << ' ';
        }
    }
}

// 배열 없는 버전
/*
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int N, X;
    std::cin >> N >> X;

    while (N--) {
        int number;
        std::cin >> number;

        if (number < X) {
            std::cout << number << ' ';
        }
    }
}
*/
