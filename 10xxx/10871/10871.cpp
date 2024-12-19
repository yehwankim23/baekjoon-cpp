#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int N, X;
    std::cin >> N >> X;

    int* numbers = new int[N];

    for (int index = 0; index < N; index++) {
        std::cin >> numbers[index];
    }

    for (int index = 0; index < N; index++) {
        int& number = numbers[index];

        if (number < X) {
            std::cout << number << ' ';
        }
    }

    delete[] numbers;
}

// 배열 없는 버전

// #include <iostream>
// 
// int main() {
//     std::cin.tie(nullptr);
//     std::ios_base::sync_with_stdio(false);
// 
//     int N, X;
//     std::cin >> N >> X;
// 
//     while (N--) {
//         int number;
//         std::cin >> number;
// 
//         if (number < X) {
//             std::cout << number << ' ';
//         }
//     }
// }
