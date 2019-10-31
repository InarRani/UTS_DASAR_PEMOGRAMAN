#include <iostream>
using namespace std;
int main()
{
    int Jumlah_semula,Dikasih, Jumlah_sekarang;

    cout << "             ================================ \n"<<endl;
    cout << "             = Selamat Datang DiProgram C++ = \n"<<endl;
    cout << "             =             Inar             = \n"<<endl;
    cout << "             ================================ \n"<<endl;
    cout <<endl;
    cout << " Masukan Nilai Uang Semula = Rp.";
    cin  >> Jumlah_semula ;
    cout <<endl;
    cout << " Masukan Nilai Uang Yang Dikasih = Rp.";
    cin  >> Dikasih ;
    cout <<endl;
    Jumlah_sekarang = Jumlah_semula + Dikasih;
    cout << "Maka Nilai Uang Sekarang     = Rp."<<Jumlah_sekarang<<endl;
    cout << "Nilai Uang Semula            = Rp."<<Jumlah_semula<<endl;
    cout << "Nilai Uang Yang Dikasih      = Rp."<<Dikasih<<endl;

    return 0;
}
