#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int count1, count2, count3;
    std::cin >> count1 >> count2 >> count3;

    if (count1 == count2 && count1 == count3) {
        std::cout << 10000 + count1 * 1000;
    } else if (count1 == count2 || count1 == count3) {
        std::cout << 1000 + count1 * 100;
    } else if (count2 == count3) {
        std::cout << 1000 + count2 * 100;
    } else {
        int max = count1;

        if (count2 > max) {
            max = count2;
        }

        if (count3 > max) {
            max = count3;
        }

        std::cout << max * 100;
    }
}
