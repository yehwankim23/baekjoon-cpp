#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int A, B, C;
    std::cin >> A >> B >> C;

    B += C;

    if (B >= 60) {
        A += B / 60;
        B %= 60;
    }

    if (A >= 24) {
        A %= 24;
    }

    std::cout << A << ' ' << B;
}

// 조건문 없는 버전

// #include <iostream>
// 
// int main() {
//     std::cin.tie(nullptr);
//     std::ios_base::sync_with_stdio(false);
// 
//     int A, B, C;
//     std::cin >> A >> B >> C;
// 
//     int minutes = ((A * 60 + B + C)) % (24 * 60);
// 
//     std::cout << minutes / 60 << ' ' << minutes % 60;
// }
