#include <string>
#include <iostream>

using namespace std;

int main()
{
    double z;  // первый взнос
    double x; // ежемесячный платёж
    double y; // процентная ставка
    double month = 0; // количество лет
    double f; // Необходимая сумма
    cin >> x >> z >> y >> f;
   do {
       z += x;
       double month_procent = 0;
       month_procent = y / 12;
       z += (z * month_procent / 100);
        month++;
        cout << "Month " << month << ": current ballance " << z << " pln." << "\n";
   } while (z < f);
    cout << month;
    return 0;
}

