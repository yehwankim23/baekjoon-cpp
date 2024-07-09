#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int N, M;
    std::cin >> N >> M;

    std::cout << (N > M ? N - M : M - N);
}

// 조건문 없는 버전
/*
#include <iostream>
#include <cmath>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int N, M;
    std::cin >> N >> M;

    std::cout << std::abs((long long) N - M);
}
*/
