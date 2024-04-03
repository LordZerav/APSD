#include <iostream>
#include <string>

using namespace std;

int main() {
    // Deklarasi Variabel
    string namaSiswa;
    float nilai_keaktifan, nilai_tugas, nilai_ujian;
    float nilai_akhir;

    //Input Data Siswa
    cout << "===== Program Menghitung Nilai Akhir Siswa dari Kursus yang Diikuti =====" << endl;
    cout << "Nama Siswa : ";
    getline(cin,namaSiswa);

    //Input Data Nilai Siswa
    cout << "Nilai Keaktifan : ";
    cin >> nilai_keaktifan;

    cout << "Nilai Tugas : ";
    cin >> nilai_tugas;

    cout << "Nilai Ujian : ";
    cin >> nilai_ujian;

    //Mencari Nilai Murni
    float nilai_murni_keaktifan = nilai_keaktifan * 0.2;
    float nilai_murni_tugas = nilai_tugas * 0.5;
    float nilai_murni_ujian = nilai_ujian * 0.3;

    //Mencari Nilai Akhir
    nilai_akhir = nilai_murni_keaktifan + nilai_murni_tugas + nilai_murni_ujian;

    //Output
    cout << "===== Hasil Akhir =====" << endl;
    cout << "Nama Siswa : " << namaSiswa << endl;
    cout << "Nilai Akhir yang diperoleh dalam kursus yang diikuti " << nilai_akhir << endl;

    return 0;

}