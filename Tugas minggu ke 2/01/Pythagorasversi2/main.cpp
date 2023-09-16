#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "\t| Program Menghitung Panjang Sisi Miring Segitiga Siku-Siku |\n";
    cout << "\t=============================================================\t\t\n";

    int a = 13;
    int b = 5;
    float c;

    cout << "Panjang: " << a << endl;
    cout << "Tinggi: " << b << endl;

    c = sqrt(a * a + b * b);

    cout << "----------------------------" << endl;

    cout << "Hasil: " << c << endl;

    system("pause");

    return 0;

}