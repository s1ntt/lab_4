#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
   // кодіровка для програми
   SetConsoleCP(CP_UTF8);
   SetConsoleOutputCP(CP_UTF8);
   float x, y;
  float b = 12.6;
  for (x=1.23; x>=-2.4; x=x-0.3)
  {
   float l = log(abs(x));
    y=15.28*pow(abs(x),-3/2) + cos(l+b);
    cout << " y = " << y << "\n"; 
  }
 system("pause");
}