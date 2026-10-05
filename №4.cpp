#include <cmath>
#include <iostream>
#include <limits>

void printRoots(double a, double b, double c) {
    if (a == 0) {
        if (b == 0) std::cout << (c == 0 ? "Корнем является любое действительное число.\n" : "Корней нет.\n");
        else std::cout << "Единственный корень: " << -c / b << '\n';
        return;
    }
    
    double d = b * b - 4 * a * c;
    double tol = std::numeric_limits<double>::epsilon() * (b * b + std::abs(4 * a * c)) * 4;
    
    if (d < -tol) std::cout << "Действительных корней нет.\n";
    else if (std::abs(d) <= tol) std::cout << "Единственный корень: " << -b / (2 * a) << '\n';
    else {
        double sq = std::sqrt(d);
        std::cout << "Корни: " << (-b - sq) / (2 * a) << " и " << (-b + sq) / (2 * a) << '\n';
    }
}

void printArea() {
    double x, y;
    std::cout << "Введите длины двух сторон прямоугольника: ";
    if (!(std::cin >> x >> y)) std::cerr << "Ошибка: стороны должны быть числами.\n";
    else if (x <= 0 || y <= 0) std::cout << "Длины сторон должны быть положительными.\n";
    else std::cout << "Площадь прямоугольника: " << x * y << '\n';
}

int main() {
    double a, b, c;
    std::cout << "Введите коэффициенты a, b и c: ";
    if (!(std::cin >> a >> b >> c)) return std::cerr << "Ошибка: коэффициенты должны быть числами.\n", 1;

    char cmd;
    std::cout << "Введите символ (D, q или a): ";
    if (!(std::cin >> cmd)) return std::cerr << "Ошибка: не удалось прочитать символ.\n", 1;

    switch (cmd) {
        case 'D': std::cout << "Щербич Андрей\n"; break;
        case 'q': printRoots(a, b, c); break;
        case 'a': printArea(); break;
        default: std::cout << "Неизвестный символ. Используйте D, q или a.\n"; return 1;
    }
    
    return 0;
}