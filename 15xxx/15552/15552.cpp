#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int T;
    std::cin >> T;

    while (T--) {
        int A, B;
        std::cin >> A >> B;

        std::cout << A + B << '\n';
    }
}
