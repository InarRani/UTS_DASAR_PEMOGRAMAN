#include <iostream>
using namespace std;
int main()
{
    double panjang, lebar, keliling;

    cout << "================================ \n"<<endl;
    cout << "= Selamat Datang DiProgram C++ = \n"<<endl;
    cout << "=   Keliling Persegi Panjang   = \n"<<endl;
    cout << "================================ \n"<<endl;
    cout <<endl;
    cout << " Masukan Panajang persegi = ";
    cin  >> panjang ;
    cout <<endl;
    cout << " Masukan lebar persegi = ";
    cin  >> lebar ;
    cout <<endl;

    keliling = 2 * panjang + lebar;

    cout << "Maka keliling persegi panjang adalah = "<< keliling<<endl;

    return 0;
}
