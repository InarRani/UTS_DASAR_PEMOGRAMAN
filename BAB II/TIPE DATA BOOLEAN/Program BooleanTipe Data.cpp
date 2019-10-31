#include <iostream>
using namespace std;
int main()
{
    bool pria;
    pria = true;
    char n[20],a [20],j [20];
    cout << "             ================================ \n"<<endl;
    cout << "             = Selamat Datang DiProgram C++ = \n"<<endl;
    cout << "             =      BOOLEAN TIPE DATA      = \n"<<endl;
    cout << "             ================================ \n"<<endl;
    cout <<endl;
    cout << "Masukan Nama Anda  = ";
    cin >> n;
    cout <<endl;
    cout << "Masukan Alamat Anda  = ";
    cin >> a;
    cout <<endl;
    cout << "Jenis Kelamin [tulis(pria)] = ";
    cin >> j;
    cout <<endl;

    if (pria)
    {
        cout<<"Nama          = "<<n<<endl;
        cout<<"Alamat        = "<<a<<endl;
        cout<<"Jenis Kelamin = "<<j<<endl;
    }
    else
    {
        cout<<"Nama          = "<<n<<endl;
        cout<<"Alamat        = "<<a<<endl;
        cout<<"Jenis Kelamin = "<<j<<endl;
    }
    return 0;
}
