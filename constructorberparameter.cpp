#include <iostream>
using namespace std;

class mahasiswa{
    public:
        mahasiswa(int nim, string nama); //Constructor dengan parameter
};

// Definisi constructor denhang parameter
mahasiswa::mahasiswa(int nim, string nama) {
    cout << "Constructor dengan Parameter Terpanggil" << endl;
    cout << "NIM    : " << nim << endl;
    cout << "Nama   : " << nama << endl;
}

int main(){
    // Memanggil constructor dengan parameter
    mahasiswa mhs(12345, "Pascal");
    return 0;
}