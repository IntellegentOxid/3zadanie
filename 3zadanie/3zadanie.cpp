#include <iostream>
using namespace std;
int main()
{
    setlocale(0, ".1251");
    double z1, z2, x, y;
    cout << "Введіть значення x: ";
    cin >> x;
    cout << "Введіть значення y: ";
    cin >> y;
    if ((cos(x) + 1 - 2 * pow(sin(2 * x), 2)) == 0) 
    {
        cout << "На нуль ділити не можна ;(";
        return 0;
    }
    cout << "z1= " << (cos(x) * cos(x) + sin(y) * sin(y) + (1 / 4) * sin(2 * x) - 1) << endl;
    cout << "z2= " << (sin(x + y) * sin(y - x));
    system("pause>>void");
    return 0;
}