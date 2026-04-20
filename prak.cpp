#include <iostream>
using namespace std;

// Membuat class Barang
class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    // Method untuk menampilkan data
    void printData() {
        cout << "Nama Barang       : " << nama << endl;
        cout << "Jumlah            : " << jumlah << endl;
        cout << "Kategori          : " << kategori << endl;
        cout << "Tanggal Produksi  : " << tanggalProduksi << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    // Membuat object
    Barang elektronik;
    Barang nonElektronik;

    // Mengisi data elektronik
    elektronik.nama = "Laptop";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2024-01-10";

    // Mengisi data non elektronik
    nonElektronik.nama = "Meja";
    nonElektronik.jumlah = 5;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "2023-12-01";

    // Menampilkan data
    cout << "Data Barang Elektronik:" << endl;
    elektronik.printData();

    cout << "Data Barang Non Elektronik:" << endl;
    nonElektronik.printData();

    return 0;
}