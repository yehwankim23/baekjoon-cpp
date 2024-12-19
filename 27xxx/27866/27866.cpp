#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::string S;
    std::cin >> S;

    int i;
    std::cin >> i;

    std::cout << S[i - 1];
}
