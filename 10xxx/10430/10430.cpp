#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int A, B, C;
    std::cin >> A >> B >> C;

    std::cout << (A + B) % C << '\n'
        << ((A % C) + (B % C)) % C << '\n'
        << (A * B) % C << '\n'
        << ((A % C) * (B % C)) % C;
}
