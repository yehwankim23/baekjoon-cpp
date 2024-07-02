#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int H, M;
    std::cin >> H >> M;

    M -= 45;

    if (M < 0) {
        H--;
        M += 60;
    }

    if (H < 0) {
        H += 24;
    }

    std::cout << H << ' ' << M;
}

// 조건문 없는 버전
/*
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int H, M;
    std::cin >> H >> M;

    int minutes = ((H * 60 + M - 45) + 24 * 60) % (24 * 60);

    std::cout << minutes / 60 << ' ' << minutes % 60;
}
*/
