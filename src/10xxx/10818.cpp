#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int N;
    std::cin >> N;

    int numbers[N];

    for (int& number : numbers) {
        std::cin >> number;
    }

    int min = numbers[0];
    int max = numbers[0];

    for (int& number : numbers) {
        if (number < min) {
            min = number;
        }

        if (number > max) {
            max = number;
        }
    }

    std::cout << min << ' ' << max;
}

// 배열 없는 버전
/*
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int N;
    std::cin >> N;

    int number;
    std::cin >> number;

    int min = number;
    int max = number;

    while (--N) {
        std::cin >> number;

        if (number < min) {
            min = number;
        }

        if (number > max) {
            max = number;
        }
    }

    std::cout << min << ' ' << max;
}
*/
