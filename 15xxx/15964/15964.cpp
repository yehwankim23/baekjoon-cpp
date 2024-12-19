#include <iostream>

long long function(int a, int b) {
    return ((long long) a + b) * (a - b);
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int A, B;
    std::cin >> A >> B;

    std::cout << std::fixed << function(A, B);
}

// 함수 없는 버전

// #include <iostream>
// 
// int main() {
//     std::cin.tie(nullptr);
//     std::ios_base::sync_with_stdio(false);
// 
//     int A, B;
//     std::cin >> A >> B;
// 
//     std::cout << std::fixed << ((long long) A + B) * (A - B);
// }
