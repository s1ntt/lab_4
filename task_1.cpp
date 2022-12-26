#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
   // кодіровка для програми
   SetConsoleCP(CP_UTF8);
   SetConsoleOutputCP(CP_UTF8);
  int pr; 
    double x, n, sum;
    float eps = 0.0001; 
    int nfor;
intmain:

    x = 0; n = 0; sum = 0; nfor = 0;

    cout << "Оберiть бажану дiю:" << endl;
    cout << "1) Обчислити n - й елемент заданого арифметичного ряду" << endl;
    cout << "2) Обчислити суму n перших елементiв заданого ряду" << endl;
    cout << "3) Обчислити значення  суми арифметичного ряду з точнiстю Eps" << endl;
    cout << "Введiть число: "; cin >> pr;

    switch (pr)
    {
//=======================================================================
        case 1: 
tryagaincase1:
        cout << "Введiть x (|x|<1): "; cin >> x; 

        if ( -1 < x && x < 1) 
        { 
            cout << "Введiть номер елемента: "; cin >> n;
            cout << "Результат: " << pow(-1,n)*(n+1)*pow(x,n) << endl;
            cout << "\n" << endl;
            goto intmain;
            break;
        }
        else 
        {
            cout << "Введiть корректне число" << endl;
            goto tryagaincase1;
        }
        
//=======================================================================
        case 2:
tryagaincase2:
     
        sum = 0; 
        cout << "Введiть x (|x|<1): "; cin >> x; 

        if ( -1 < x && x < 1) 
        { 
            cout << "Введiть номер елемента: "; cin >> n;
            nfor = n;
            n = 1;
            for (int i = 0; i < nfor; i++)
            {
                sum = sum + pow(-1,n)*(n+1)*pow(x,n);
                n++;
            }
            cout << "Результат: " << sum << endl; 
            cout << "\n" << endl;
            goto intmain;
            break;
        }

        else 
        {
            cout << "Введiть корректне число" << endl;
            goto tryagaincase2;
        }
        
//=======================================================================
        case 3:
        
tryagaincase3:
        cout << "Введiть x (|x|<1): "; cin >> x; 

        if ( -1 < x && x < 1) 
        { 
            cout << "Введiть номер елемента: "; cin >> n;
            n = 1;
            while (fabs(pow(-1,n)*(n+1)*pow(x,n)) > eps)
            {
                sum = sum + pow(-1,n)*(n+1)*pow(x,n);
                n++;
            } 
            cout << "Результат: " << sum << endl; 
            cout << "\n" << endl;
            goto intmain;
            break;
        }

        else 
        {
            cout << "Введiть корректне число" << endl;
            goto tryagaincase3;
        }
//=======================================================================
  
        default:  { cout << "Невiрний варiант, оберiть щось iз списку" << endl; goto intmain; break; }
    }  
}