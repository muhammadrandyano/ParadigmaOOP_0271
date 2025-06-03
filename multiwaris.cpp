#include <iostream>
using namespace std;

class orang{
    public :
    int Umur;

    orang (int pUmur):
    Umur (pUmur) 
    {
        cout << "orang dibuat dengan umur" << Umur <<"\n" << endl;
    } 
};

class pekerja : virtual public orang {
    public :

    pekerja (int pUmur):
    orang (pUmur)
    {
        cout << "Pekerja dibuat\n" << endl;
    }
};

class pelajar : virtual public orang {
    public :

    pelajar (int pUmur):
    orang (pUmur)
    {
        cout << "Pelajar dibuat\n" << endl;
    }
};

class budi : public pekerja, public pelajar {
    public : 
    budi (int pUmur):
    pekerja (pUmur),
    pelajar (pUmur),
    orang (pUmur) //hal inni dapat dilakukan jika menggunakan virtual
    {
        cout << "Budi dibuat \n" <<endl;
    }
};