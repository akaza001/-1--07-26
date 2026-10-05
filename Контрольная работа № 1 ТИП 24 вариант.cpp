#include <iostream>

int main() {
    int m = 0.0;
    int n = 0.0;

    std::cout << "Введите значения m: ";
    std::cin >> m;
    std::cout << "Введите значение n: ";
    std::cin >> n;

    // -3(5m-3n)-4(-2m+7n)
    // -15m+9n+8m-28n
    // -7m-19n
    int result = -(7 * m) - (19 * n);
    std::cout << "Значение будет равное: " << result;
    return 0;
}