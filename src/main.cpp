#include <iostream>
using namespace std;

int main()
{
    // Задача 1 - Begin 35
    // Декларація змінних
    double a, b, c, sum_sqrs;
    // Вивід позначення поточного завдання
    cout << "Задача 1 - Begin 35\n";
    // Введення змінних
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter side c: ";
    cin >> c;
    // Розрахунок результату
    sum_sqrs = a * a + b * b + c * c;
    // Вивід результату
    cout << "Sum of the squares: " << sum_sqrs << endl;

    // Задача 2 - Begin 3
    // Декларація змінних
    double S, P;
    // Вивід позначення поточного завдання
    cout << "\nTask 2 - Begin 3\n";
    // Введення змінних
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    // Розрахунки результату
    S = a * b;
    P = 2 * (a + b);
    // Вивід результату
    cout << "Area: " << S << endl;
    cout << "Perimeter: " << P << endl;

    // Задача 3 - Begin 6
    // Декларація змінних
    double V;
    // Вивід позначення поточного завдання
    cout << "\nTask 3 - Begin 6\n";
    // Введення змінних
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter side c: ";
    cin >> c;
    // Розрахунки результату
    V = a * b * c;
    S = 2 * (a * b + b * c + a * c);
    // Вивід результату
    cout << "Volume: " << V << endl;
    cout << "Area: " << S << endl;

    return 0;
}