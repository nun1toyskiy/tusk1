#include<iostream>
#include <vector>
int main() {
    system("chcp 1251 > null");
    setlocale(LC_ALL, "Ukrainian");
    int x, c, n;
    std::vector<int> ar;

    std::cout << "Введіть x, c і n: ";
    std::cin >> x >> c >> n;

    // Визначення розміру вектору та введення його елементів
    for (int i = 0; i < n; ++i) {
        int temp;
        std::cin >> temp;
        ar.push_back(temp);
    }

    // Віднімання x від елемента ar[c] (якщо c в межах вектору)
    if (c >= 0 && c < ar.size()) {
        ar[c] -= x;
    }

    // Ділення кожного елемента вектору на x
    for (int i = 0; i < ar.size(); ++i) {
        ar[i] /= x;
    }

    c = 0; // Обнулення c перед використанням в циклі

    // Додавання всіх значень вектору до c
    for (int i = 0; i < ar.size(); ++i) {
        c += ar[i];
    }

    std::cout << "Результат: " << c;

    return 0;
}