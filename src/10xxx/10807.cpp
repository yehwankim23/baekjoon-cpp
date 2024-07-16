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

    int v;
    std::cin >> v;

    int count = 0;

    for (int& number : numbers) {
        if (number == v) {
            count++;
        }
    }

    std::cout << count;
}
