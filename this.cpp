#include <iostream>
using namespace std;

class buku {
    string judul;
    public:
        string setget(string jdl)
        {
            // nilai parameter 'judul' untuk member variabel 'judul'
            this->judul = jdl;
            // return variabe; judul
            return this->judul;
        }
};