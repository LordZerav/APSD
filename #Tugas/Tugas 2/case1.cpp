#include <iostream>
#include <string>

using namespace std;

int main () {
    // Deklarasi variabel
    string Nama_Siswa ;
    int NIM, nilai_TugasI, nilai_TugasII, nilai_TugasIII ;
    int nilaiRata_rata ;

    //Input Data Siswa
    cout << "===== Program Menghitung Nilai Rata-rata =====" << endl;
    cout << "Nama Siswa: ";
    getline(cin,Nama_Siswa);

    cout << "Masukkan Nim" << endl;
    cin >> NIM;

    //Input Nilai Tugas
    cout << "Masukkan Nilai Tugas I" << endl;
    cin >> nilai_TugasI;

    cout << "Masukkan Nilai Tugas II" << endl;
    cin >> nilai_TugasII;

    cout << "Masukkan Nilai Tugas III" << endl;
    cin >> nilai_TugasIII;

    //Penghitungan nilaiRata_rata
    nilaiRata_rata = (nilai_TugasI + nilai_TugasII + nilai_TugasIII)/3;

    //Output
    cout << "Hasil akhir " << endl;
    cout << "NIM " << NIM;
    cout << " siswa yang memperoleh nilai Rata_rata " << nilaiRata_rata;
    cout << " dari hasil tugas yang diikutinya. " << endl;

    return 0;
}