#include <iostream>
#include <Windows.h>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
   // кодіровка для програми
   SetConsoleCP(CP_UTF8);
   SetConsoleOutputCP(CP_UTF8);
  srand(time(NULL));
    const int n = 40;
    int A[n];
    int min = 0;
    int min_index = 0;
    int last_negative = 0;
    int last_negative_index = 0;
    cout << "Масив А:" ;

    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 201 - 100;
        cout << A[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
            min_index = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] < 0)
        {
            last_negative = A[i];
            last_negative_index = i;
        }
    }
    cout << "Змінений масив:" ;
    A[min_index] = last_negative;
    A[last_negative_index] = min;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
