#include <iostream>
using namespace std;

int main() 
{
    // Завдання 1: Ввести значення 2-х цілих змінних а і b. Направити два покажчика на ці змінні.Потім поміняти місцями значення змінних а і bчерез їх покажчики.
    int a, b;
    cout << "Введіть першу цілу змінну a: ";
    cin >> a;
    cout << "Введіть другу цілу змінну b: ";
    cin >> b;

    int* ptr_a = &a;
    int* ptr_b = &b;

    
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    cout << "Після заміни: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Завдання 2: Описати 2 покажчика на логічний тип. Виділити для них динамічну пам'ять. Присвоїти значення true і false у виділену пам'ять. Поміняти місцями їх значення.

    bool* ptr1 = new bool;
    bool* ptr2 = new bool;

    *ptr1 = true;
    *ptr2 = false;

    cout << "Оригінальні значення логічних змінних:" << endl;
    cout << "ptr1 = " << *ptr1 << endl;
    cout << "ptr2 = " << *ptr2 << endl;

  
    bool tempBool = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tempBool;

    cout << "Після заміни логічних змінних:" << endl;
    cout << "ptr1 = " << *ptr1 << endl;
    cout << "ptr2 = " << *ptr2 << endl;

    delete ptr1; 
    delete ptr2; 

    // Завдання 3: . Створити динамічні масиви, використовуючи покажчики. Дано 2 масиви х[n] і у[m].Скільки разів зустрічається останній елемент першого  масиву х[n] у другому масиві у[m

    int n, m;
    cout << "Введіть кількість елементів масивів x[n] та y[m]:" << endl;
    cin >> n >> m;

    int* x = new int[n];
    int* y = new int[m];

    cout << "Масив x[n]: ";
    for (int i = 0; i < n; i++) {
        x[i] = rand() % 21 - 10;
        cout << x[i] << " ";
    }
    cout << endl;

    cout << "Масив y[m]: ";
    for (int i = 0; i < m; i++) {
        y[i] = rand() % 21 - 10;
        cout << y[i] << " ";
    }
    cout << endl;

    int count = 0;
    for (int j = 0; j < m; j++) {
        if (y[j] == x[n - 1]) {
            count++;
        }
    }

    cout << "Останній елемент масиву x[n-1] = " << x[n - 1] << " зустрічається в масиві y[m] " << count << " разів." << endl;

    delete[] x;
    delete[] y;

    return 0;
}