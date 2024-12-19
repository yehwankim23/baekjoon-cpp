#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int N;
    std::cin >> N;

    for (int count = 1; count <= 9; count++) {
        std::cout << N << " * " << count << " = " << N * count << '\n';
    }
}
