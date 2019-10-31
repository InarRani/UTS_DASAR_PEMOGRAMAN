#include <iostream>
using namespace std;
int main()
{
    char nama[20],tempat_lahir[20],tanggal_lahir[20],jenis_kelamin[20],alamat[30];
    double no_telepon,nim;
    cout << "================================ \n"<<endl;
    cout << "= Selamat Datang DiProgram C++ = \n"<<endl;
    cout << "=           BIODATA            = \n"<<endl;
    cout << "================================ \n"<<endl;
    cout <<endl;
    cout << " Masukan Nama Anda    :";
    cin  >> nama ;
    cout << " Masukan NIM          :";
    cin  >> nim ;
    cout << " Masukan Tempa Lahir  :";
    cin  >> tempat_lahir;
    cout << " Masukan Tanggal Lahir:";
    cin  >> tanggal_lahir ;
    cout << " Masukan Jenis kelamin:";
    cin  >> jenis_kelamin ;
    cout << " Masukan Alamat       :";
    cin  >> alamat;
    cout << " Masukan Nomer Telepon:";
    cin  >> no_telepon ;
    cout << "             BIODATA \n";
    cout << " Nama        :"<<nama;
    cout <<endl;
    cout << " NIM          :"<<nim;
    cout <<endl;
    cout << " Tempa Lahir  :"<<tempat_lahir;
    cout <<endl;
    cout << " Tanggal Lahir:"<<tanggal_lahir;
    cout <<endl;
    cout << " Tanggal Lahir:"<<jenis_kelamin;
    cout <<endl;
    cout << " Alamat       :"<<alamat;
    cout <<endl;
    cout << " Nomer Telepon:"<<no_telepon;
    cout <<endl;
    return 0;
}
