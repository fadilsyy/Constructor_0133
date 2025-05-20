#include <iostream>
using namespace std;

class Barang
{
    private:
        string namaBarang;
        int kodeBarang;
    public:
        Barang(string nb, int kb);
        void cetak();
};

Barang::Barang(string nb, int kb)
{
    namaBarang = nb;
    kodeBarang = kb;
}

void Barang::cetak()
{
    cout << "Nama Barang : " << namaBarang << endl;
    cout << "Kode Barang : " << kodeBarang << endl;
}

int main()
{
    Barang brg("Wipol", 12);
    brg.cetak();
    return 0;

}