#include<iostream>
#include <vector>
int main() {
    system("chcp 1251 > null");
    setlocale(LC_ALL, "Ukrainian");
    int x, c, n;
    std::vector<int> ar;

    std::cout << "������ x, c � n: ";
    std::cin >> x >> c >> n;

    // ���������� ������ ������� �� �������� ���� ��������
    for (int i = 0; i < n; ++i) {
        int temp;
        std::cin >> temp;
        ar.push_back(temp);
    }

    // ³������� x �� �������� ar[c] (���� c � ����� �������)
    if (c >= 0 && c < ar.size()) {
        ar[c] -= x;
    }

    // ĳ����� ������� �������� ������� �� x
    for (int i = 0; i < ar.size(); ++i) {
        ar[i] /= x;
    }

    c = 0; // ��������� c ����� ������������� � ����

    // ��������� ��� ������� ������� �� c
    for (int i = 0; i < ar.size(); ++i) {
        c += ar[i];
    }

    std::cout << "���������: " << c;

    return 0;
}