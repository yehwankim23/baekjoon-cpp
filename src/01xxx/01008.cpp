#include <iostream>
#include <iomanip>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int A, B;
    std::cin >> A >> B;

    std::cout << std::fixed << std::setprecision(10) << (double) A / B;
}
