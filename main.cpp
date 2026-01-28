#include <iostream>

int Policz(int a, int b) {
    return a + b;
}

int Odejmij(int a, int b) {
    return a - b;
}
int main() {
    std::cout << "Hello, World!" << std::endl;

    std::cout << "W pierwszym branchu; 2 + 3 = " << Policz(2, 3) << std::endl;

    std::cout << "Wynik odejmowania 10 - 4 = " << Odejmij(10, 4) << std::endl;

    return 0;
}
