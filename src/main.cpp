#include <iostream>
using namespace std;

int main()
{
    /* =========== Задача 1===========
    Begin 35 - Дано три числа.
    Знайти суму їх квадратів. */

    // Декларація змінних
    double num_1, num_2, num_3, sum_of_squares;
    // Вивід позначення поточного завдання
    cout << "--- Задача 1 - Begin 35 ---\n";
    // Введення змінних
    cout << "Введіть число 1: ";
    cin >> num_1;
    cout << "Введіть число 2: ";
    cin >> num_2;
    cout << "Введіть число 3: ";
    cin >> num_3;
    // Розрахунок результату
    sum_of_squares = num_1 * num_1 + num_2 * num_2 + num_3 * num_3; // Сума квадратів
    // Вивід результату
    cout << "Сума квадратів чисел: " << sum_of_squares << endl;

    /* =========== Задача 2 ===========
    Begin 3 - Дано сторони прямокутника a і b.
    Знайти його площу S = a · b і периметр P = 2 · (a + b). */

    // Декларація змінних
    double length, width, task_2_area, perimeter;
    // Вивід позначення поточного завдання
    cout << "\n--- Задача 2 - Begin 3 ---\n";
    // Введення змінних
    cout << "Введіть довжина: ";
    cin >> length;
    cout << "Введіть ширина: ";
    cin >> width;
    // Розрахунки результату
    task_2_area = length * width;     // Площа
    perimeter = 2 * (length + width); // Периметр
    // Вивід результату
    cout << "Площа: " << task_2_area << endl;
    cout << "Периметр: " << perimeter << endl;

    /* =========== Задача 3 ===========
    Begin 6 - Дано довжини ребер a, b, c прямокутного паралелепіпеда.
    Знайти його об'єм V = a · b · c і площа поверхні S = 2 · (a · b + b · c + a · c). */

    // Декларація змінних
    double side_1, side_2, side_3, volume, task_3_area;
    // Вивід позначення поточного завдання
    cout << "\n--- Задача 3 - Begin 6 ---\n";
    // Введення змінних
    cout << "Введіть довжину сторони 1: ";
    cin >> side_1;
    cout << "Введіть довжину сторони 2: ";
    cin >> side_2;
    cout << "Введіть довжину сторони 3: ";
    cin >> side_3;
    // Розрахунки результату
    volume = side_1 * side_2 * side_3;                                       // Об'єм
    task_3_area = 2 * (side_1 * side_2 + side_2 * side_3 + side_1 * side_3); // Площа
    // Вивід результату
    cout << "Об'єм: " << volume << endl;
    cout << "Площа: " << task_3_area << endl;

    return 0;
}
