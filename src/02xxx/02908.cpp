#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::string A, B;
    std::cin >> A >> B;

    int A_reversed = (A[2] - '0') * 100 + (A[1] - '0') * 10 + (A[0] - '0');
    int B_reversed = (B[2] - '0') * 100 + (B[1] - '0') * 10 + (B[0] - '0');

    std::cout << (A_reversed > B_reversed ? A_reversed : B_reversed);
}

// 문자열 없는 버전
/*
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int A, B;
    std::cin >> A >> B;

    A = (A % 10) * 100 + ((A / 10) % 10) * 10 + A / 100;
    B = (B % 10) * 100 + ((B / 10) % 10) * 10 + B / 100;

    std::cout << (A > B ? A : B);
}
*/
