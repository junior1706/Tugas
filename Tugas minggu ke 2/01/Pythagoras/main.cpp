#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "\t| Program Menghitung Panjang Sisi Miring Segitiga Siku-Siku |\n";
    cout << "\t=============================================================\t\t\n";

    float a, b, c;

    cout << "Panjang: ";
    cin >> a;

    cout << "Tinggi: ";
    cin >> b;

    c = sqrt(a * a + b * b);

    cout << "----------------------------" << endl;

    cout << "Hasil = " << c << endl;

    system("pause");

    return 0;

}