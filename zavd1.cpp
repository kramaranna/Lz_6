#include <iostream>
using namespace std;

int main() {
    const int n = 3;
    int v1[n], v2[n];   // вектори 1 та 2
    
    cout << "Введіть координати вектора 1 через пробіл:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    cout << endl;
    
    cout << "Введіть координати вектора 2 через пробіл:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    cout << endl;
    
     // Обчислення скалярного добутку
    int sd = 0;
    for (int i = 0; i < n; i++) {
        sd += v1[i] * v2[i];
    }
    cout << "Скалярний добуток векторів 1 та 2: " << sd << endl;
    cout << endl;

    int minim, dop;
    // Сортування v1 за спаданням методом екстремальних елементів
    for (int j = 0; j < n - 1; j++) 
    {
        minim = j;
        for (int i = j + 1; i < n; i++) 
        {
            if (v1[i] > v1[minim]) // > — бо сортуємо за спаданням
            { 
                dop = v1[minim];
                v1[minim] = v1[i];
                v1[i] = dop;
            }
        }
    }
    // Сортування v2 за спаданням методом екстремальних елементів
    for (int j = 0; j < n - 1; j++) 
    {
        minim = j;
        for (int i = j + 1; i < n; i++) 
        {
            if (v2[i] > v2[minim]) 
            {
                dop = v2[minim];
                v2[minim] = v2[i];
                v2[i] = dop;
            }
        }
    }
    // Вивід відсортованих векторів
    cout << "Вектор 1 після сортування за спаданням: " << endl;
    for (int i = 0; i < n; i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << "Вектор 2 після сортування за спаданням: "<< endl;
    for (int i = 0; i < n; i++) {
        cout << v2[i] << " ";
    }
    cout << endl;
    cout << endl;
     
    return 0;
}