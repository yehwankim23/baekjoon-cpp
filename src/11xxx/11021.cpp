#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int T;
    std::cin >> T;

    for (int count = 1; count <= T; count++) {
        int A, B;
        std::cin >> A >> B;

        std::cout << "Case #" << count << ": " << A + B << '\n';
    }
}
