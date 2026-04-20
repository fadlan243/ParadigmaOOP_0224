#include <iostream>
using namespace std;

class Mahasiswa {
public :
    int nim;
    string nama;
    float nilai;

    void printData(){
        cout << "NIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    }
};

int main() {
    Mahasiswa mhs; //ocject
    
    mhs.nim = 2021;
    mhs.nama = "MasGatot";
    mhs.nilai = 89.5;

    mhs.printData();

}