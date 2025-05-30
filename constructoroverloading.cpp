#include <iostream>
using namespace std;

class mahasiswa{
    private:
    int nim;
    string nama;
    public:
        mahasiswa();
        mahasiswa(int);
        mahasiswa(string);
        mahasiswa(int iNim, string iNama);
        void cetak();
};

mahasiswa::mahasiswa(){
}

mahasiswa::mahasiswa(int iNim){
    nim = iNim; //definisi hanya NIM
}

mahasiswa::mahasiswa(string iNama){
     nama = iNama; //definisi hanya NAMA
}

mahasiswa::mahasiswa(int iNim, string iNama){
    nim = iNim; //Definisi NIM dan NAMA
    nama = iNama;
}

void mahasiswa::cetak(){
    cout << endl << "Nim = " << nim << endl;
    cout << "Nama = " << nama << endl;
}

int main(){
    mahasiswa mhs1(102030);             //hanya NIM
    mahasiswa mhs2("Andi");             //hanya nama
    mahasiswa mhs3(10203, "Santi");     //NIM dan nama

    //tampilkan nilai
    cout << "Mahasiswa 1:"; mhs1.cetak();
    cout << "Mahasiswa 2:"; mhs2.cetak();
    cout << "Mahasiswa 3:"; mhs3.cetak();

    return 0;
}