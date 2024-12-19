#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int numbers[9];

    for (int& number : numbers) {
        std::cin >> number;
    }

    int max = numbers[0];
    int index = 1;

    for (int count = 2; count <= 9; count++) {
        int& number = numbers[count - 1];

        if (number > max) {
            max = number;
            index = count;
        }
    }

    std::cout << max << '\n' << index;
}

// 배열 없는 버전

// #include <iostream>
// 
// int main() {
//     std::cin.tie(nullptr);
//     std::ios_base::sync_with_stdio(false);
// 
//     int max;
//     std::cin >> max;
// 
//     int index = 1;
// 
//     for (int count = 2; count <= 9; count++) {
//         int number;
//         std::cin >> number;
// 
//         if (number > max) {
//             max = number;
//             index = count;
//         }
//     }
// 
//     std::cout << max << '\n' << index;
// }
