#include <iostream>

int function(int* numbers, int length) {
    int sum = 0;

    for (int index = 0; index < length; index++) {
        int& digit = *(numbers + index);
        sum += digit * digit;
    }

    return sum % 10;
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int numbers[5];

    for (int& number : numbers) {
        std::cin >> number;
    }

    std::cout << function(numbers, sizeof(numbers) / sizeof(numbers[0]));
}

// 함수 없는 버전

// #include <iostream>
// 
// int main() {
//     std::cin.tie(nullptr);
//     std::ios_base::sync_with_stdio(false);
// 
//     int sum = 0;
// 
//     for (int count = 0; count < 5; count++) {
//         int digit;
//         std::cin >> digit;
// 
//         sum += digit * digit;
//     }
// 
//     std::cout << sum % 10;
// }
