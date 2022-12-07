#include <iostream>
int Addition(int x, int y) {
    return(x + y);
}

int Subtraction(int x, int y) {
    return(x - y);
}

int Multiplication(int x, int y) {
    return(x * y);
}

int Division(int x, int y) {
    return(x / y);
}

int main() {
    setlocale(LC_ALL, "Russian");
    int a = 0;
    int b = 0;
    char operation;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Введите операцию: ";
    std::cin >> operation;

    switch (operation) {
    case '-':
        std::cout << a <<" - "<< b <<" = " << Subtraction(a, b) << '\n';
        break;
    case '+':
        std::cout << a << " + " << b << " = " << Addition(a, b) << '\n';
        break;
    case '*':
        std::cout << a << " * " << b << " = " << Multiplication(a,b) << '\n';
        break;
    case '/':
        if (b == 0) {
            std::cout << "Деление на ноль";
            break;
            }
        std::cout << a << " / " << b << " = " << Division(a,b) << '\n';
        break;
    default:
        std::cout << "Ошибка"<<'\n';
    }
    return 0;
}
